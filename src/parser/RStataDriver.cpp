#include <string>
#include <Rcpp.h>
#include "RStata.hpp"

class RStataDriver;
#include "ado.tab.hpp"

#include "RStataDriver.hpp"

/*
 * Free-standing utility functions
 */

void
raise_condition(const std::string& msg, const std::string& type)
{
  Rcpp::List cond;
  cond["message"] = msg;
  cond["call"] = R_NilValue;
  cond.attr("class") = Rcpp::CharacterVector::create(type, "condition");
  Rcpp::Function stopper("stop");
  stopper(cond);
}

/*
 * Everything else
 */

// ctor
RStataDriver::RStataDriver(std::string _text, int _debug_level)
{
    text = _text;
    debug_level = _debug_level;
    error_seen = 0;
}

// dtor
RStataDriver::~RStataDriver() { }

// recursively delete the ast member
void
RStataDriver::delete_ast()
{
    delete ast; // the dtor recurses depth-first and deletes from the bottom up
}

int
RStataDriver::parse()
{
    int res;
    
    scan_begin();
    yy::RStataParser parser(*this);
    parser.set_debug_level(debug_level);
    res = parser.parse();
    scan_end();
    
    return res;
}

void
RStataDriver::error(const yy::location& l, const std::string& m)
{
    const std::string msg = "Error: line " + std::to_string(l.begin.line) +
          ", column " + std::to_string(l.begin.column) + ": " + m;
    
    Rcpp::Rcerr << msg << std::endl;

    error_seen = 1;
}

void
RStataDriver::error(const std::string& m)
{
    const std::string msg = "Error: line unknown, column unknown: " + m;
    
    Rcpp::Rcerr << msg << std::endl;

    error_seen = 1;
}

