#include <Rcpp.h>
#include "rstata.hpp"

using namespace Rcpp;

StataCmd::StataCmd(std::string _verb,
                   std::string _weight, std::string _using_filename,
                   int _has_range, int _range_lower, int _range_upper,
                   StataExpr *_modifiers, StataExpr *_varlist,
                   StataExpr *_assign_stmt, StataExpr *_if_exp,
                   StataExpr *_options)
{
    verb = _verb;

    modifiers = _modifiers;
    varlist = _varlist;
    assign_stmt = _assign_stmt;
    if_exp = _if_exp;
    options = _options;

    has_range = _has_range;
    range_lower = _range_lower;
    range_upper = _range_upper;

    weight = _weight;
    using_filename = _using_filename;
};

List StataCmd::as_list()
{
    List res;
   
    res = List::create(_["verb"]            = Symbol(verb),
                       _["modifiers"]       = modifiers->as_expr(),
                       _["varlist"]         = varlist->as_expr(),
                       _["assign_stmt"]     = assign_stmt->as_expr(),
                       _["if_exp"]          = if_exp->as_expr(),
                       _["options"]         = options->as_expr(),
                       _["range_lower"]     = range_lower,
                       _["range_upper"]     = range_upper,
                       _["weight"]          = weight,
                       _["using_filename"]  = using_filename);
    
    return res;
}
