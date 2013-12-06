#include <iostream> 
using namespace std;

int main () {
	double liters_kilometers;
	cout << "Enter your fuel consumption (litters/100km): ";
	cin >> liters_kilometers;
	cout << "Your fuel consumption is " << 62.14*3.875/liters_kilometers << " miles/gallon."<< endl;
	return 0; 
} 

