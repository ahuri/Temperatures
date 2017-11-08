#include "Fahrenheit.h"


Fahrenheit::~Fahrenheit()
{
}

void Fahrenheit::SetValue(double value)
{
	m_value = value;
}

double Fahrenheit::GetValue() const
{
	return m_value;
}

Fahrenheit::operator Celsius()
{
	return Celsius((m_value - 32) / 1.8);
}


ostream & operator<<(ostream& os, const Fahrenheit& f)
{
	os << f.GetValue();
	return os;
}
