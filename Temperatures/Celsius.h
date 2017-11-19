#pragma once
#include <iostream>
#include <string>

using namespace std;

class Celsius
{
	
private:
	double m_Celsius;
public:
	double getVal() const;
	Celsius(double );
	~Celsius();
};

ostream &operator<<(ostream &os, const Celsius & mCelsius);
