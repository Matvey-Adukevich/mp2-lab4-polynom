#include "polynom.h"
#include "monom.h"
#include <stdexcept>
#include <iostream>
#include <math.h>
#include <string>
#include <any>
#include <sstream>
#include <antlr4-runtime.h>
#include "calc_pLexer.h"
#include "calc_pParser.h"
#include "calc_pBaseVisitor.h"
#include "calc_pUserVisitor.h"

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

Polynom::Polynom(std::string expr) {
	this->monoms = new TList<Monom>();
	std::string expression = expr;
	std::stringstream stream(expression);

	antlr4::ANTLRInputStream input(stream);
	calc_pLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	calc_pParser parser(&tokens);
	calcUserVisitor visitor(this);
	visitor.visit(parser.prog());

}

Polynom::~Polynom() {
	delete monoms;
}

TList<Monom>* Polynom::GetMonoms() const {
	return monoms;
}

void Polynom::AddMonom(const Monom& m) {
	if (m.GetA() == 0) return;

	TNode<Monom>* curr = monoms->GetFP();
	TNode<Monom>* prev = nullptr;

	while (curr != nullptr) {
		if (curr->val.GetN() == m.GetN()) {
			curr->val.SetA(curr->val.GetA() + m.GetA());
			return;
		}
		if (curr->val.GetN() > m.GetN()) {
			monoms->InsertBefore(curr, m, prev);
			return;
		}

		prev = curr;
		curr = curr->next;
	}

	monoms->AddLast(m);
}

//void Polynom::AddMonom(const Monom& m) {
//	if (m.GetA() == 0) {
//		return;
//	}
//	TIterator<Monom> iterator(monoms->GetFP());
//	while(iterator.HasNext()){
//		Monom& tmp = iterator.Next();
//		if (tmp.GetN() == m.GetN()) {
//			tmp.SetA(tmp.GetA() + m.GetA());
//			return;
//			/*if (tmp.GetA() + m.GetA() != 0) {
//				tmp.SetA(tmp.GetA() + m.GetA());
//			} else {
//
//			}*/
//			
//		}
//	}
//	/*TIterator<Monom> iterator2(monoms->GetFP());*/
//	bool insert = false;
//	/*if (iterator2.HasNext()) {
//		Monom tmp = iterator2.Next();
//	}*/
//	/*while (iterator2.HasNext()) {
//		Monom& tmp = iterator2.Next();
//		if (tmp.GetN() > m.GetN()) {
//			break;
//		}
//	}*/
//	TIterator<Monom> iterator2(monoms->GetFP());
//	Monom* prev = nullptr;
//	Monom* now = nullptr;
//	//Monom now = iterator2.Next();
//
//	while (iterator2.HasNext()) {
//		Monom* now = &iterator2.Next();
//		if (now->GetN() > m.GetN()) {
//			this->monoms->AddAfter(prev, m);
//		}
//		prev = now;
//	}
//	monoms->AddLast(m);
//	monoms->Sort();
//
//	//monoms->AddLast(m);
//}

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