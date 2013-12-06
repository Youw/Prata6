#include <iostream> 
using namespace std;

#define SEC_IN_MIN 60.
#define MIN_IN_DEG 60.

int main () {
	int deg,min,sec;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> deg;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec;
	cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << deg+min/MIN_IN_DEG+sec/SEC_IN_MIN/MIN_IN_DEG <<  " degrees." << endl;
	return 0; 
} 

