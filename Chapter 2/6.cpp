#include <iostream>

using namespace std;

double LightYearsToAstronomUn(double lightYears) {
	return lightYears*63240; 
}

int main () {
	using namespace std; 
	double lightYears; 
	cout << "Enter the number of light years: "; 
	cin >> lightYears; 
	cout << lightYears << " light year(s) = "  << LightYearsToAstronomUn(lightYears) << " astronomical unit(s)." << endl; 
	return 0; 
} 
