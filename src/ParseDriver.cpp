#include <string>

#include <Rcpp.h>

#include "Ado.hpp"
#include "ado.tab.hpp"
typedef yy::AdoParser::semantic_type YYSTYPE;
#include "lex.yy.hpp"

ParseDriver::ParseDriver(std::string text, Rcpp::Environment context,
                         int debug_level, int echo)
    : context(context), debug_level(debug_level), echo(echo), text(text)
{
    error_seen = 0;
}

ParseDriver::~ParseDriver()
{
    // all the other members still get their destructors called
    if(ast != NULL)
        delete ast;
}

void
ParseDriver::set_ast(ExprNode *node)
{
    this->ast = node;
}

Rcpp::List
ParseDriver::get_ast()
{
    return(this->ast->as_R_object());
}

int
ParseDriver::parse()
{
    int res;
    yyscan_t yyscanner;

    yylex_init(&yyscanner);

    yy_scan_string(text.c_str(), yyscanner);

    yy::AdoParser parser(*this, yyscanner);

    if( (this->debug_level & DEBUG_PARSE_TRACE) != 0 )
        parser.set_debug_level(1);
    else
        parser.set_debug_level(0);

    res = parser.parse();

    yylex_destroy(yyscanner);

    return res;
}

void
ParseDriver::wrap_cmd_action(ExprNode *node)
{
    // don't do anything if a) we've been told not to, or
    // b) we couldn't parse the input
    if( (this->debug_level & DEBUG_NO_CALLBACKS) != 0 )
        return;

    if(this->error_seen)
        return;

    std::string txt = this->echo_text_buffer; // copy it
    this->echo_text_buffer.clear(); // clear even if error in cmd_action

    Rcpp::Function cmd_action = this->context["cmd_action"];
    cmd_action(node->as_R_object(), Rcpp::CharacterVector::create(txt),
               this->echo);
}

std::string
ParseDriver::get_macro_value(std::string name)
{
    if( (this->debug_level & DEBUG_NO_CALLBACKS) == 0 )
    {
        Rcpp::Function macro_accessor = this->context["macro_accessor"];
        return Rcpp::as<std::string>(macro_accessor(name));
    } else
    {
        this->log(std::string("Returning empty macro for debug"));
        return std::string("");
    }
}

void
ParseDriver::push_echo_text(std::string echo_text)
{
    this->echo_text_buffer += echo_text;
}

void
ParseDriver::error(int lineno, int col, const std::string& m)
{
    std::string msg = std::to_string(lineno) + std::string(":") + \
                      std::to_string(col) + std::string(": ") + m;

    this->error(msg);
}

void
ParseDriver::error(const std::string& m)
{
    this->error_seen = 1;
    this->log(std::string("Error: ") + m);
}

void ParseDriver::log(const std::string& m)
{
    if( (this->debug_level & DEBUG_NO_PARSE_ERROR) == 0 )
    {
        if( (this->debug_level & DEBUG_NO_CALLBACKS) == 0 )
        {
            Rcpp::Function logger = this->context["log_result"];
            logger(m);
        }
        else
            Rcpp::Rcerr << m << std::endl;
    }
}

using namespace Rcpp;
RCPP_MODULE(class_ParseDriver) {
    class_<ParseDriver>("ParseDriver")

    .constructor<std::string,Rcpp::Environment,int,int>()

    .field_readonly("error_seen", &ParseDriver::error_seen)
    .field_readonly("debug_level", &ParseDriver::debug_level)
    .field_readonly("echo", &ParseDriver::echo)

    .method("parse", &ParseDriver::parse)
    .method("get_ast", &ParseDriver::get_ast)
    ;
}

