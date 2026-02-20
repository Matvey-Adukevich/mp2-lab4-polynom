#include "polynom.h"
#include "monom.h"

Polynom::Polynom() {
	this->monoms = new TList<Monom>();
}

Polynom::~Polynom() {
	delete monoms;
}

void Polynom::AddMonom(const Monom& m) {
	monoms->AddLast(m);
}