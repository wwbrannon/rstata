#ifndef RSTATA_DRIVER_H
#define RSTATA_DRIVER_H

#include <string>
#include <Rcpp.h>
#include "RStata.hpp"

class RStataDriver
{
    public:
        RStataDriver(std::string text, int debug_level,
                     int batch, Rcpp::Function *cmd_action);
        virtual ~RStataDriver();

        ExprNode *ast;
        void delete_ast();

        void scan_begin();
        void scan_end();

        int parse();

        int batch;
        Rcpp::Function *cmd_action;

        // error-handling functions and state
        int error_seen;
        void error(const yy::location& l, const std::string& m);
        void error(const std::string& m);

    private:
        std::string text;
        int debug_level;
};

#endif /* RSTATA_DRIVER_H */

