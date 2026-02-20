#pragma once
#include "monom.h"
#include "tlist.h"

class Polynom {
	TList<Monom>* monoms;
	//int n; //сколько мономов

public:
	void AddMonom(const Monom& m);
	Polynom();
	~Polynom();
};