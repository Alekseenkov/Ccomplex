
#include <iostream>
#include "Ccomplex.h"
#include <ccomplex>
using namespace std;


int main()
{
	int real = 0;
	int imag = 0;
	cout << "Enter first complex number:\n"
		<< "Enter real part->";
	cin >> real;
	cout << "Enter imag part->";
	cin >> imag;
	Ccomplex a(real, imag);

	cout << "Enter second complex number:\n"
		<< "Enter real part->";
	cin >> real;
	cout << "Enter imag part->";
	cin >> imag;
	Ccomplex b(real, imag);


	Ccomplex rez;
	try
	{
		rez = a / b;
		cout << '(' << a.real() << " + " << a.imag() << "*i)/" << '(' << b.real() << " + " << b.imag() << "*i) = "
			<< rez.real() << " + " << rez.imag() << "*i" << endl;

	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}


	cout << "(" << b.real() << " + " << b.imag() << "*i)*=" << '(' << a.real() << " + " << a.imag() << "*i) = ";
	b *= a;

	cout << b.real() << " + " << b.imag() << "*i" << endl;
}
