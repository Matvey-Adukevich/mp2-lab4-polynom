
// Generated from calc_p.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "calc_pParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calc_pParser.
 */
class  calc_pVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calc_pParser.
   */
    virtual std::any visitProg_line(calc_pParser::Prog_lineContext *context) = 0;

    virtual std::any visitMonom_line(calc_pParser::Monom_lineContext *context) = 0;


};

