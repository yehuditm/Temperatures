#include "Fahrenheit.h"

Fahrenheit::Fahrenheit(double val)
{
	m_Fahrenheit = val;
}


Fahrenheit::~Fahrenheit()
{
}

double Fahrenheit::getVal() const
{
	return  m_Fahrenheit;
}

ostream &operator<<(ostream &os, const Fahrenheit & mFahrenheit)
{
	os << mFahrenheit.getVal() << " \370F";
	return os;
}

Fahrenheit::operator Celsius() const
{
	Celsius c((m_Fahrenheit - 32) / 1.8);
	return c;
}

Fahrenheit::Fahrenheit(const Celsius &obj) {
	m_Fahrenheit = obj.getVal()*1.8 + 32;
}