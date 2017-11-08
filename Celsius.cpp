#include "Celsius.h"
#include "Fahrenheit.h"

Celsius::~Celsius()
{
}

void Celsius::SetValue(double value)
{
	m_value = value;
}

double Celsius::GetValue() const
{
	return m_value;
}

Celsius::operator Fahrenheit()
{
	return Fahrenheit(m_value*1.8 + 32);
}

ostream & operator<<(ostream & os, const Celsius & c)
{
	os << c.GetValue();
	return os;
}
