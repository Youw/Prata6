#include <iostream>

using namespace std;

const int kFootToInch = 12;

int main() {
	
	int inches; 
	cout << "Enter the height in inches: _______\b\b\b\b\b\b\b"; 
	cin >> inches; 
	cout << "The height is: " << inches/kFootToInch << " foot(feet) and " << inches%kFootToInch << " inch(es)." << endl;
	return 0;
}
