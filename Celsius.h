#pragma once
#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
private:
	double m_value;
public:
	Celsius(double value) : m_value(value) {}
	~Celsius();

	void SetValue(double value);
	double GetValue() const;

	operator Fahrenheit();
	friend ostream& operator<<(ostream& os, const Celsius& c);
};

