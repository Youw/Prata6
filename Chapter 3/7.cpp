#include <iostream>

void ShowTime(int hours, int min) {
	std::cout << "Time: " << hours << ":" << min << std::endl;
}

int main() {
	std::cout << "Enter the number of hours: ";
	int hours;
	std::cin >> hours;
	std::cout << "Enter the number of minutes: ";
	int minutes;
	std::cin >> minutes;
	ShowTime(hours,minutes);
	return 0;
}
