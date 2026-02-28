#pragma once
#include "monom.h"
#include "tlist.h"
#include "titerator.h"

class Polynom {
	TList<Monom>* monoms;
	//int n; //сколько мономов

public:
	void AddMonom(const Monom& m);
	void Print();

	TList<Monom>* GetMonoms() const;

	Polynom operator+(const Polynom& p);
	Polynom operator-(const Polynom& p);
	Polynom operator*(const Polynom& p);
	/*bool operator>(const Monom& m) const;
	bool operator<(const Monom& m) const;
	bool operator==(const Monom& m) const;
	bool operator!=(const Monom& m) const;*/

	Polynom();
	Polynom(const Polynom& other);
	~Polynom();
};