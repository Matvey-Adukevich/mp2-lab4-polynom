#pragma once
#include "monom.h"
#include "tlist.h"
#include "titerator.h"
#include <string>

class Polynom {
	TList<Monom>* monoms;
public:
	void AddMonom(const Monom& m);
	void AddMonomNoSort(const Monom& m);
	void Print();

	TList<Monom>* GetMonoms() const;

	Polynom operator+(const Polynom& p);
	Polynom operator-(const Polynom& p);
	Polynom operator*(const Polynom& p);

	Polynom();
	Polynom(const Polynom& other);
	Polynom(std::string expr);
	~Polynom();
};