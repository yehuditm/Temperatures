#pragma once
#include <iostream>
#include "Celsius.h"
#include <string>

using namespace std;

class Fahrenheit
{
	double m_Fahrenheit;
public:
	operator Celsius() const;
	Fahrenheit(const Celsius &obj);
	double getVal() const;
	Fahrenheit(double);
	~Fahrenheit();
};

ostream &operator<<(ostream &os, const Fahrenheit & mFahrenheit);
