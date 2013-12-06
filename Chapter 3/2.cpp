#include <iostream> 

int main () {
using namespace std; 
	int heightFoot;
	int heightInch;
	int heightInches;
	double heightMeters;
	double weightPounds;
	double weightKilograms;
	cout << "Enter height (feet): "; 
	cin >> heightFoot; 
	cout << "Enter height (inches): "; 
	cin >> heightInch; 
	cout << "Enter weight (pounds): "; 
	cin >> weightPounds; 
	heightInches = heightFoot * 12 + heightInch;
	heightMeters = heightInches * 0.0254;
	weightKilograms = weightPounds / 2.2;
	cout << "Your BMI is: " << weightKilograms / heightMeters / heightMeters<< '.';
	return 0;
}