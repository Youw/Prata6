#include <iostream> 
using namespace std;

#define HOURS_IN_DAY 24
#define MINUTES_IN_HOUR 60
#define SECONDS_IN_MINUTE 60

int main () {
	long long world_population, USA_population;
	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the population of the US: ";
	cin >> USA_population;
	cout << "The population of the US is " << 100.*USA_population/world_population << "% of the world population. " << endl;
	return 0; 
} 

