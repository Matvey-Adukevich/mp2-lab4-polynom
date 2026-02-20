#include "monom.h"

//void Monom::AddMonom() {
//	
//}


Monom::Monom() :N(0), a(0.0), x(0.0), y(0.0), z(0.0) {};

Monom::Monom(double a, double x, unsigned int x_pow, double y, unsigned int y_pow, double z, unsigned int z_pow) {
	this->a = a;
	this->x = x;
	this->y = y;
	this->z = z;

	this->N = 0;
	this->N = x_pow;

	unsigned int mask = y_pow << 8;
	this->N = N | mask;

	mask = z_pow << 16;
	this->N = N | mask;
}

