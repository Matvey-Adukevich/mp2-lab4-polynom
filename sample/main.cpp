#include <iostream>
#include "monom.h"
#include "polynom.h"
#include <string>

using namespace std;

int main() {
    Monom monom1(1.0, 2, 3, 5);
    Monom monom2(3.5, 56, 23, 6);
    Polynom polynom;
    polynom.AddMonom(monom2);
    polynom.AddMonom(monom1);
    /*Polynom polynom2;
    polynom2.AddMonom(monom1);
    polynom2.AddMonom(monom2);*/
    Polynom polynom3("1.2x^2y^3z^5+2.45y^35-3.1x^1y^3-4.0x^9");
    polynom.Print();
    polynom3.Print();
    Polynom polynom_sum = polynom + polynom3;
    Polynom polynom_razn = polynom - polynom3;
    Polynom polynom_mult = polynom * polynom3;
    polynom_sum.Print();
    polynom_razn.Print();
    polynom_mult.Print();

    return 0;
}