#include <iostream>
#include "Celsius.h"
#include "Fahrenheit.h"
using namespace std;


int main()
{
	Celsius boiling(100), zero(-273.15);
	Fahrenheit freezing(32);
	cout << "Table" << endl;
	cout << "Absolute Zero\t" << zero << "\t" << (Fahrenheit)zero << endl;
	cout << "Boiling point\t" << boiling << "\t\t" << (Fahrenheit)boiling << endl;
	cout << "Freezing point\t" << (Celsius)freezing << "\t\t" << freezing << endl;
	return 0;
}