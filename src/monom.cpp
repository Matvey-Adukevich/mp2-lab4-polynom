#include "monom.h"
#include <stdexcept>

using namespace std;

double Monom::GetA() const { return this->a; }
unsigned int Monom::GetN() const { return this->N; }
int Monom::GetPowZ() const {
	int tmp = this->N;
	int mask = (1 << 8) - 1;
	tmp = tmp & mask;
	return tmp;
}
int Monom::GetPowY() const {
	int tmp = this->N;
	int mask = ((1 << 16) - 1) & (~((1<<8)-1));
	tmp = tmp & mask;
	tmp = tmp >> 8;
	return tmp;
}
int Monom::GetPowX() const {
	int tmp = this->N;
	int mask = ((1 << 24) - 1) & (~((1 << 16) - 1));
	tmp = tmp & mask;
	tmp = tmp >> 16;
	return tmp;
}

void Monom::SetA(double _a) {
	this->a = _a;
}
void Monom::SetN(unsigned int _N) {
	this->N = _N;

}
void Monom::SetPowX(unsigned int x_pow) {
	unsigned int tmp = this->N;
	unsigned int mask = ~((1 << 24) - 1) & (~((1 << 16) - 1));
	tmp = tmp & mask;
	unsigned int tmp_pow = x_pow << 16;
	tmp = tmp_pow | tmp;
	this->N = tmp;
}
void Monom::SetPowY(unsigned int y_pow) {
	unsigned int tmp = this->N;
	unsigned int mask = ~((1 << 16) - 1) & (~((1 << 8) - 1));
	tmp = tmp & mask;
	unsigned int tmp_pow = y_pow << 8;
	tmp = tmp_pow | tmp;
	this->N = tmp;
}
void Monom::SetPowZ(unsigned int z_pow) {
	unsigned int tmp = this->N;
	unsigned int mask = ~((1 << 8) - 1);
	tmp = tmp & mask;
	unsigned int tmp_pow = z_pow;
	tmp = tmp_pow | tmp;
	this->N = tmp;
}

Monom Monom::operator+(const Monom& m) {
	if (this->N != m.GetN()) throw out_of_range("error monom +");
	return Monom(this->GetA() + m.GetA(), this->N);
}
Monom Monom::operator-(const Monom& m) {
	if (this->N != m.GetN()) throw out_of_range("error monom -");
	return Monom(this->GetA() - m.GetA(), this->N);
}
Monom Monom::operator*(const Monom& m) {
	return Monom(this->GetA() * m.GetA(), this->GetPowX() + m.GetPowX(), this->GetPowY() + m.GetPowY(), this->GetPowZ() + m.GetPowZ());
}
bool Monom::operator>(const Monom& m) const{
	return this->N > m.GetN();
}
bool Monom::operator<(const Monom& m) const {
	return this->N < m.GetN();
}
bool Monom::operator==(const Monom& m) const {
	return this->N == m.GetN();
}
bool Monom::operator!=(const Monom& m) const {
	return this->N != m.GetN();
}

Monom::Monom() :N(0), a(0.0) {};

Monom::Monom(double a, unsigned int x_pow, unsigned int y_pow, unsigned int z_pow) {
	this->a = a;

	this->N = 0;
	this->N = z_pow;

	unsigned int mask = y_pow << 8;
	this->N = N | mask;

	mask = x_pow << 16;
	this->N = N | mask;
}

Monom::Monom(double a, unsigned int N) {
	this->a = a;
	this->N = N;
}

Monom::Monom(const Monom& other) {
	this->a = other.a;
	this->N = other.N;
}

