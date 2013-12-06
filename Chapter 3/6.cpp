#include <iostream> 
using namespace std;

int main () {
	long long kilometers, liters;
	cout << "Length of the way you have been drived on the car (km): ";
	cin >> kilometers;
	cout << "Enter how much was spent fuel (liters): ";
	cin >> liters;
	cout << "Your fuel consumption is " << 100.*liters/kilometers << " liters for 100 km."<< endl;
	return 0; 
} 

