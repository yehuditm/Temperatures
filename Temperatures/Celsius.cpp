#include "Celsius.h"

Celsius::Celsius(double val)
{
	m_Celsius = val;
}

Celsius::~Celsius()
{
}

double Celsius::getVal() const
{
	return  m_Celsius;
}

ostream &operator<<(ostream &os, const Celsius & mCelsius)
{
	os << mCelsius.getVal() << " \370C";
	return os;
}