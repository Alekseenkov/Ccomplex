
#include <iostream>
#include "Ccomplex.h"
#include <ccomplex>
using namespace std;


int main()
{
	Ccomplex a(5, 1);
	Ccomplex b(2, 1);
	Ccomplex с;

	с = a / b;

	cout << с.real() <<"|" << с.imag()<< endl;


	b *= a;
	cout << b.real() << "|" << b.imag() << endl;

	/// <summary>
	/// ///////////////////
	/// </summary>
	/// <returns></returns>
	complex<double> a1(5, 1);
	complex<double> b1(2, 1);
	complex<double> c1(0, 0);

	c1 = a1 / b1;
	cout << c1.real() << "|" << c1.imag() << endl;
	b1 *= a1;
	cout << b.real() << "|" << b.imag() << endl;
}