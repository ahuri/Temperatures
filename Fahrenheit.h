#pragma once
#include "Celsius.h"

class Fahrenheit
{
private:
	double m_value;
public:
	Fahrenheit(double value) : m_value(value) {}
	~Fahrenheit();

	void SetValue(double value);
	double GetValue() const;

	operator Celsius();
	friend ostream& operator<<(ostream& os, const Fahrenheit& f);
};

