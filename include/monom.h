#pragma once

class Monom {
	unsigned int N; //под степени
	double a;
public:

	double GetA() const;
	unsigned int GetN() const;
	int GetPowX() const;
	int GetPowY() const;
	int GetPowZ() const;

	void SetA(double _a);
	void SetN(unsigned int _N);
	void SetPowX(unsigned int x_pow);
	void SetPowY(unsigned int y_pow);
	void SetPowZ(unsigned int z_pow);

	Monom operator+(const Monom& m);
	Monom operator-(const Monom& m);
	Monom operator*(const Monom& m);
	bool operator>(const Monom& m) const;
	bool operator<(const Monom& m) const;
	bool operator==(const Monom& m) const;
	bool operator!=(const Monom& m) const;

	Monom();
	Monom(double a, unsigned int x_pow, unsigned int y_pow, unsigned int z_pow);
	Monom(double a, unsigned int N);
	Monom(const Monom& other);
};