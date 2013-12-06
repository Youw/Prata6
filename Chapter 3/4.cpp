#include <iostream> 

int YearsToMonth(int years);

int main () {
using namespace std; 
	int age; 
	cout << "Enter your age: "; 
	cin >> age; 
	int months = YearsToMonth(age); 
	cout << "You are " << months << " month old."; 
	return 0; 
} 

int YearsToMonth(int years) { 
	return 12 * years; 
} 