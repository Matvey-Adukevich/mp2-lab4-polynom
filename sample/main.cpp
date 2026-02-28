#include <iostream>
#include "monom.h"
#include "polynom.h"

using namespace std;

int main() {
    Monom monom1(1, 0.25, 2, 9.0, 3, 4.5, 5);
    Monom monom2(3.5, 1.0, 56, 2.1, 23, 35.4, 6);
    Polynom polynom;
    polynom.AddMonom(monom2);
    polynom.AddMonom(monom1);
    Polynom polynom2;
    polynom2.AddMonom(monom1);
    polynom2.AddMonom(monom2);
    polynom.Print();
    polynom2.Print();
    Polynom polynom_sum = polynom + polynom2;
    Polynom polynom_razn = polynom - polynom2;
    Polynom polynom_mult = polynom * polynom2;
    polynom_sum.Print();
    polynom_razn.Print();
    polynom_mult.Print();
    /*try {
        TArithmeticExpression expr("-(-1)");

        cout << "Infix: " << expr.GetInfix() << endl;
        cout << "Postfix: " << expr.GetPostfix() << endl;
        map<string, double> values;
        cout << "Result: " << expr.Calculate(values) << endl;

        TArithmeticExpression expr2("-12+(-1+12)*4");
        cout << "Infix: " << expr2.GetInfix() << endl;
        cout << "Postfix: " << expr2.GetPostfix() << endl;
        map<string, double> values2;
        cout << "Result: " << expr2.Calculate(values2) << endl;

        TArithmeticExpression expr3("(12+32)*4");
        cout << "Infix: " << expr3.GetInfix() << endl;
        cout << "Postfix: " << expr3.GetPostfix() << endl;
        map<string, double> values3;
        cout << "Result: " << expr3.Calculate(values3) << endl;

        TArithmeticExpression expr4("(12--32)*4");
        cout << "Infix: " << expr4.GetInfix() << endl;
        cout << "Postfix: " << expr4.GetPostfix() << endl;
        map<string, double> values4;
        cout << "Result: " << expr4.Calculate(values4) << endl;
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }*/

    return 0;
}