#include "polynom.h"
#include "monom.h"
#include <stdexcept>
#include <iostream>
#include <math.h>

using namespace std;

Polynom::Polynom() {
	this->monoms = new TList<Monom>();
}

Polynom::Polynom(const Polynom& other) {
	this->monoms = new TList<Monom>();
	TIterator<Monom> it(other.monoms->GetFP());
	while (it.HasNext()) {
		Monom tmp = it.Next();
		this->monoms->AddLast(tmp);
	}
}

Polynom::~Polynom() {
	delete monoms;
}

TList<Monom>* Polynom::GetMonoms() const {
	return monoms;
}

void Polynom::AddMonom(const Monom& m) {
	if (m.GetA() == 0) {
		return;
	}
	TIterator<Monom> iterator(monoms->GetFP());
	while(iterator.HasNext()){
		Monom& tmp = iterator.Next();
		if (tmp.GetN() == m.GetN()) {
			tmp.SetA(tmp.GetA() + m.GetA());
			return;
			/*if (tmp.GetA() + m.GetA() != 0) {
				tmp.SetA(tmp.GetA() + m.GetA());
			} else {

			}*/
			
		}
	}
	/*TIterator<Monom> iterator2(monoms->GetFP());*/
	bool insert = false;
	/*if (iterator2.HasNext()) {
		Monom tmp = iterator2.Next();
	}*/
	/*while (iterator2.HasNext()) {
		Monom& tmp = iterator2.Next();
		if (tmp.GetN() > m.GetN()) {
			break;
		}
	}*/
	monoms->AddLast(m);
	monoms->Sort();

	//monoms->AddLast(m);
}

void Polynom::Print() {
	if (this->monoms == nullptr) throw out_of_range("empty polynom");
	TIterator<Monom> i(monoms->GetFP());
	bool first = true;
	while (i.HasNext()) {
		Monom tmp = i.Next();
		if (tmp.GetA() == 0) continue;
		if (!first) {
			if (tmp.GetA() > 0) {
				std::cout << "+";
			}
			if (tmp.GetA() < 0) {
				std::cout << "-";
			}
		}
		else {
			if (tmp.GetA() < 0) {
				std::cout << "-";
			}
			first = false;
		}
		std::cout << fabs(tmp.GetA()) << "x^"<<tmp.GetPowX()<<"y^"<<tmp.GetPowY()<<"z^"<<tmp.GetPowZ();
	}
	if (first) {
		std::cout << "0";
	}
	std::cout << "\n";

}

Polynom Polynom::operator+(const Polynom& p) {
	Polynom polynom;
	TIterator<Monom> it1(monoms->GetFP());
	TIterator<Monom> it2(p.GetMonoms()->GetFP());
	while (it1.HasNext()) {
		Monom tmp = it1.Next();
		polynom.AddMonom(tmp);
	}
	while (it2.HasNext()) {
		Monom tmp = it2.Next();
		polynom.AddMonom(tmp);
	}
	return polynom;
}	

Polynom Polynom::operator-(const Polynom& p) {
	Polynom polynom;
	TIterator<Monom> it1(monoms->GetFP());
	TIterator<Monom> it2(p.GetMonoms()->GetFP());
	while (it1.HasNext()) {
		Monom tmp = it1.Next();
		polynom.AddMonom(tmp);
	}
	while (it2.HasNext()) {
		Monom tmp = it2.Next();
		tmp.SetA(tmp.GetA() * (-1));
		polynom.AddMonom(tmp);
	}
	return polynom;
}
Polynom Polynom::operator*(const Polynom& p) {
	Polynom polynom;
	TIterator<Monom> it1(monoms->GetFP());
	while (it1.HasNext()) {
		Monom arg1 = it1.Next();
		TIterator<Monom> it2(p.GetMonoms()->GetFP());
		while (it2.HasNext()) {
			Monom arg2 = it2.Next();
			Monom tmp = arg1 * arg2;
			polynom.AddMonom(tmp);
		}
		/*polynom.AddMonom(tmp);*/
	}
	
	return polynom;
}