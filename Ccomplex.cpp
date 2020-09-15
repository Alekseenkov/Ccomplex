#include "Ccomplex.h"

Ccomplex::Ccomplex()
{
}

Ccomplex::Ccomplex(double _RealVal, double _ImagVal)
{
    this->_RealVal = _RealVal;
    this->_ImagVal = _ImagVal;

}

Ccomplex::~Ccomplex()
{
}

Ccomplex& Ccomplex::operator*=(Ccomplex other)
{
    auto buff_RealVal = _RealVal * other._RealVal - _ImagVal * other._ImagVal;
    auto buff_ImagVal = _RealVal * other._ImagVal + other._RealVal * _ImagVal;
    this->_RealVal = buff_RealVal;
    this->_ImagVal = buff_ImagVal;
    return *this;
   
}

Ccomplex Ccomplex::operator/(const Ccomplex& other)
{
    auto k = (pow(other._RealVal, 2) + pow(other._ImagVal, 2));

    return Ccomplex(((_RealVal * other._RealVal + _ImagVal * other._ImagVal) / k)
        , ((_ImagVal * other._RealVal - _RealVal * other._ImagVal) / k));
}

Ccomplex& Ccomplex::operator=(Ccomplex other)
{
    this->_RealVal = other._RealVal;
    this->_ImagVal = other._ImagVal;
    return *this;
}

double Ccomplex::real()
{
    return _RealVal;
}

double Ccomplex::imag()
{
    return _ImagVal;
}
