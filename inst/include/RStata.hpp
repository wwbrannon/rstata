// Stata is a very unusual language. It resembles the Unix shell(s) than more traditional
// programming languages. A Stata script is one or more commands, which are possibly compound
// statement blocks or loops with an associated block, executed in the order they appear in the file.
// Each non-compound command starts with a verb and then has various kinds of arguments and options
// after it. In general, one non-compound command is one line, but there is a /// syntax to continue
// a command across a line break.

// The basic Stata command syntax is:
// [ (prefix [arguments])+:] command [varlist | var = exp] [if expression] [in range] [weight] [using filename] [, options]

#ifndef RSTATA_H
#define RSTATA_H

#include <memory>
#include <Rcpp.h>

// abstract base class for the AST the parser will generate
class BaseExprNode
{
    public:
        // method that returns this BaseExprNode as an R expression
        Rcpp::List as_R_object() const;
};

// The next three classes are AST nodes for literals - string, symbol and numeric
class NumberExprNode: public BaseExprNode
{
    public:
        NumberExprNode(std::string _data);
        
        Rcpp::List as_R_object() const;

    private:
        std::string data;
};

class IdentExprNode: public BaseExprNode
{
    public:
        IdentExprNode(std::string _data);
        
        Rcpp::List as_R_object() const;

    private:
        std::string data;
};

class StringExprNode: public BaseExprNode
{
    public:
        StringExprNode(std::string _data);
        
        Rcpp::List as_R_object() const;

    private:
        std::string data;
};

class DatetimeExprNode: public BaseExprNode
{
    public:
        DatetimeExprNode(std::string _date, std::string _time);
        DatetimeExprNode(std::string _dt);
        
        Rcpp::List as_R_object() const;

    private:
        Rcpp::Datetime dt;
};

// Options as they occur after commands, prefix or otherwise
class OptionExprNode: public BaseExprNode
{
    public:
        OptionExprNode(std::string _name, std::vector<std::string> _args);
        
        Rcpp::List as_R_object() const;

    private:
        std::string name;
        std::vector<std::string> args;
};

// Option lists
class OptionListExprNode: public BaseExprNode
{
    public:
        OptionListExprNode(std::vector<OptionExprNode> _options);
        Rcpp::List as_R_object() const;
    
    private:
        std::vector<OptionExprNode> options;
};

// all other expressions: assignment expressions, logical expressions,
// equality expressions, relational expressions, arithmetic expressions,
// function calls, and even statement blocks
class BranchExprNode: public BaseExprNode
{
    public:
        BranchExprNode(std::string _data);
        void setChildren(std::vector<std::unique_ptr<BaseExprNode>> _children);
        
        Rcpp::List as_R_object() const;
    
    private:
        std::vector<std::unique_ptr<BaseExprNode>> children;
        std::string data;
};

// The "embedded R" block that the lexer recognizes and passes through
class EmbeddedRCmd: public BaseExprNode
{
    private:
        std::string text;

    public:
        std::string verb;
        
        Rcpp::List as_R_object() const;
        EmbeddedRCmd(std::string _text);
};

// All non-compound Stata commands
class GeneralStataCmd: public BaseExprNode
{
    private:
        BaseExprNode *varlist;
        BaseExprNode *assign_stmt; // "var = exp"
        BaseExprNode *if_exp; // "if expression"
        BaseExprNode *weight; // "weight"
        OptionListExprNode    *options; // ", options"
        
        int has_range;
        int range_lower; // the lower range limit
        int range_upper; // the upper range limit
        
        std::string using_filename; // "using filename": the filename given after using, or NULL
    
    public:
        std::string verb;

        BaseExprNode *ChildCmd; // the command after a prefix command, incl another prefix command
        Rcpp::List as_R_object() const;

        GeneralStataCmd(std::string _verb,
                   std::string _weight, std::string _using_filename,
                   int _has_range, int _range_lower, int _range_upper,
                   BaseExprNode *_varlist, BaseExprNode *_assign_stmt,
                   BaseExprNode *_if_exp, OptionListExprNode *_options);
};

// A helper class to avoid typing out all the args to the GeneralStataCmd constructor.
// Positional-only parameters are garbage...
class MakeGeneralStataCmd
{
    public:    
        MakeGeneralStataCmd(std::string _verb);
        
        GeneralStataCmd create();

        MakeGeneralStataCmd& verb(std::string const& _verb);
        MakeGeneralStataCmd& varlist(BaseExprNode *_varlist);
        MakeGeneralStataCmd& assign_stmt(BaseExprNode *_assign_stmt);
        MakeGeneralStataCmd& if_exp(BaseExprNode *_if_exp);
        MakeGeneralStataCmd& options(OptionListExprNode *_options);
        MakeGeneralStataCmd& has_range(int _has_range);
        MakeGeneralStataCmd& range_upper(int _range_upper);
        MakeGeneralStataCmd& range_lower(int _range_lower);
        MakeGeneralStataCmd& weight(std::string _weight);
        MakeGeneralStataCmd& using_filename(std::string _using_filename);
    
    private:
        std::string __verb;
        BaseExprNode *__varlist;
        BaseExprNode *__assign_stmt;
        BaseExprNode *__if_exp;
        OptionListExprNode *__options;
        int __has_range;
        int __range_lower;
        int __range_upper;
        std::string __weight;
        std::string __using_filename;
};

#endif /* RSTATA_H */

