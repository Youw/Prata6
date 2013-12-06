#include <iostream> 
using namespace std;

#define HOURS_IN_DAY 24
#define MINUTES_IN_HOUR 60
#define SECONDS_IN_MINUTE 60

int main () {
	long long sec;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	cout 	<< sec << " seconds = " 
			<< sec/SECONDS_IN_MINUTE/MINUTES_IN_HOUR/HOURS_IN_DAY << " days, " 
			<< sec/SECONDS_IN_MINUTE/MINUTES_IN_HOUR%HOURS_IN_DAY << " hours, " 
			<< sec/SECONDS_IN_MINUTE%MINUTES_IN_HOUR <<  " minutes, "
			<< sec%SECONDS_IN_MINUTE << " seconds." 
			<< endl;
	return 0; 
} 

