#include <iostream>

using namespace std;

int CelsiusToFahrenheit(int Celsius) {
	return 1.8*Celsius+32;
}

int main () {
	using namespace std; 
	int Celsius; 
	cout << "Please enter a Celsius value: "; 
	cin >> Celsius; 
	cout << Celsius << " degree(s) Celsius is "  << CelsiusToFahrenheit(Celsius) << " degrees Fahrenheit." << endl; 
	return 0; 
} 
