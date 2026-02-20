#pragma once

class Monom {
	unsigned int N; //под степени
	double a;
	double x, y, z;
public:
	//void AddMonom(double a, double x, unsigned int x_pow, double y, unsigned int y_pow, double z, unsigned int z_pow);

	Monom();
	Monom(double a, double x, unsigned int x_pow, double y, unsigned int y_pow, double z, unsigned int z_pow);
};