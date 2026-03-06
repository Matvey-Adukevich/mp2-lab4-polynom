
// Generated from calc_p.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "calc_pVisitor.h"


/**
 * This class provides an empty implementation of calc_pVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calc_pBaseVisitor : public calc_pVisitor {
public:

  virtual std::any visitProg_line(calc_pParser::Prog_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMonom_line(calc_pParser::Monom_lineContext *ctx) override {
    return visitChildren(ctx);
  }


};

