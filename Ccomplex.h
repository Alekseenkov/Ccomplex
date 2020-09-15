#pragma once
#include <cmath>

class Ccomplex
{
public:

	Ccomplex();
	Ccomplex(double _RealVal, double _ImagVal);
	~Ccomplex();
	Ccomplex& operator*=(Ccomplex other);
	Ccomplex operator / (const Ccomplex& other);
	Ccomplex& operator =(Ccomplex other);
	
	double real();
	double imag();

private:

	double _RealVal;
	double _ImagVal;
};

