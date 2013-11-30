#include <iostream> 

void BlindMice() { 
	using std::cout; 
	using std::endl;
	cout << "Three blind mice" << endl;
} 

void MiceRun() { 
	using std::cout; 
	using std::endl;
	cout << "See how they run" << endl;
} 

int main () {
	BlindMice();
	BlindMice();
	MiceRun();
	MiceRun();
	return 0; 
} 

