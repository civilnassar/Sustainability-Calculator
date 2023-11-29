#include <iostream>
#include <iomanip>
#include <string>
#include "C:\Users\nncmo\OneDrive\Desktop\nick_header_files.h"
using namespace std;

void CityDetails() {
	cout << "Please enter the name of your city: ";
	cin >> cityName;
	cout << endl;
	cout << "Please enter the year for which you'd like to calculate scores: ";
	cin >> cityYear;
	cout << endl;
	cout << "Please enter the population of " << cityName << " in " << cityYear << ": ";
	cin >> population;
	cout << endl;
	cout << "Thanks! Let's get started...";
}