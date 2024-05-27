#include "Complex.h"

Complex::Complex(double re, double im) : _re(re), _im(im)
{}

double Complex::getRe() const
{
    return _re;
}

double Complex::getIm() const
{
    return _im;
}

std::ostream& operator<<(std::ostream &out, const Complex &c)
{
    out << "(" << c._re << ", " << c._im << "i)";
    return out;
}