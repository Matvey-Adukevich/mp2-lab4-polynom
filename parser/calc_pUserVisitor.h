#include <iostream>
#include <string>
#include <sstream>
#include <antlr4-runtime.h>
#include "calc_pLexer.h"
#include "calc_pParser.h"
#include "calc_pBaseVisitor.h"
#include "monom.h"
#include "polynom.h"


class calcUserVisitor : public calc_pBaseVisitor {
    Polynom* res;
public:
    double x = 0;
    double y = 0;
    double z = 0;
    double xy = 0;

    calcUserVisitor(Polynom* p = nullptr) :res(p) {};

	virtual std::any visitProg_line(calc_pParser::Prog_lineContext* ctx) override {
        calc_pBaseVisitor::visitProg_line(ctx);
		//std::cout<<"visitProg_line"<<std::endl;
		return 0;
    }
	
    virtual std::any visitMonom_line(calc_pParser::Monom_lineContext* ctx) override {
        calc_pBaseVisitor::visitMonom_line(ctx);
		double a = std::stod(ctx->DOUBLE()->getText());
        void* x = ctx->X();
        void* y = ctx->Y();
        void* z = ctx->Z();
        
		bool xf = x;
		bool yf = y;
        bool zf = z;

        int xPow = 0, yPow = 0, zPow = 0;
        int intIndex = 0;

        if (xf) {
            xPow = std::stoi(ctx->INT(intIndex++)->getText());
        }
        if (yf) {
            yPow = std::stoi(ctx->INT(intIndex++)->getText());
        }
        if (zf) {
            zPow = std::stoi(ctx->INT(intIndex++)->getText());
        }

        /*std::cout << "monom: " << a
            << " x^" << xPow
            << " y^" << yPow
            << " z^" << zPow << std::endl;*/

        if (res != nullptr) {
            Monom m(a, xPow, yPow, zPow);
            res->AddMonom(m);
        }
        
        return 0;
    }
};
