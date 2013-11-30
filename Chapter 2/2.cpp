#include <iostream> 

int FarlongToYard(int farlong);

int main () {
using namespace std; 
	int farlongs; 
	cout << "Enter the length in farlongs: "; 
	cin >> farlongs; 
	int yards = FarlongToYard(farlongs); 
	cout << farlongs << " farlong(s) = "; 
	cout << yards << " yard(s)." << endl; 
	return 0; 
} 

int FarlongToYard(int farlong) { 
	return 220 * farlong; 
} 