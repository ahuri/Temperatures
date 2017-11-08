#include "Celsius.h"
#include "Fahrenheit.h"

using namespace std;

void main()
{
	Celsius c1(100);		// water boiling point
	Celsius c2(0);			// water freezing point
	Fahrenheit f3(-459.67);	// absolute zero

	cout << "\t\t\tCelsius\t\tFahrenheit\n" << endl;
	cout << "Water boiling point\t" << c1 << "\t\t" << static_cast<Fahrenheit>(c1) << endl;
	cout << "Water freezing point\t" << c2 << "\t\t" << static_cast<Fahrenheit>(c2) << endl;
	cout << "Absolute zero\t\t" << f3 << "\t\t" << static_cast<Celsius>(f3) << "\t\t\t\t\n";
}