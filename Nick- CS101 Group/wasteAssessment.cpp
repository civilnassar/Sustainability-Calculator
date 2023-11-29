

#include <iostream>
#include <string>
#include <iomanip>
#include "nick_header_files.h"
using namespace std;



void runWasteAssessment()
{
	// Declare Variables
	char userInput;
	float munWastePerPerson;
	int munWasteScore;
	int lastUpdateYear;
	float const avgGlobalRecycleRate = 13.5;
	float recycleRate;
	int recyclingScore;
	int wasteReductionPolicyScore;
	int wasteTotalScore;

	//Main Header

	cout << setw(60) << setfill('-') << endl;
	cout << setw(43) << setfill('-') << "Waste Production/Recycling" << setw(17) << setfill('-');
	cout << setw(60) << setfill('-') << endl;
	cout << endl << endl << endl;

	// Municipal Waste Section
	// Section Header

	cout << setw(43) << setfill('-') << "Municipal Waste Production" << setw(17) << setfill('-');
	cout << endl << endl << endl;
	
	cout << "Please enter municipal waste per day per person (in kg.).\n";
	cout << "Note: Global values range from .11 to 4.54kg/day, please enter a value in this range: ";
	cin >> munWastePerPerson;

	if (munWastePerPerson >= 0.74 && munWastePerPerson <= 1.25) {
		munWasteScore = 22;
			cout << "This city seems to be doing a decent job in this area." << endl;
			cout << endl;
	}
	else if (munWastePerPerson > 1.25) {
		munWasteScore = 11;
			cout << "This city could use some improvement in this area." << endl;
			cout << std::endl;
	}
	else {
		munWasteScore = 33;
			cout << "This city seems to be doing a great job in this area." << endl;
			cout << std::endl;
	}

	cout << endl;
	cout << endl;

	// Recycling rate section
	// Section header

	cout << setw(37) << setfill('-') << "Recycling Rate" << setw(23) << setfill('-');
	cout << endl << endl << endl;

	cout << "Please enter the rate at which your city recycles\n";
	cout << "Note: Global average is around 13.5: ";
	cin >> recycleRate;

	if (recycleRate >= (avgGlobalRecycleRate - 1) && recycleRate <= (avgGlobalRecycleRate + 1)) {
		recyclingScore = 22;
		cout << "This city seems to be doing a decent job in this area." << endl;
		cout << endl;
	}
	else if (recycleRate < (avgGlobalRecycleRate - 1)) {
		recyclingScore = 11;
		cout << "This city could use some improvement in this area." << endl;
		cout << endl;
	}
	else {
		recyclingScore = 33;
		cout << "This city seems to be doing a great job in this area." << endl;
		cout << endl;
	}

	// Waste Reduction Policy Section
	// Section Header

	cout << setw(41) << setfill('-') << "Waste Reduction Policy" << setw(19) << setfill('-');
	cout << endl << endl << endl;

	cout << "Does this city have a waste reduction policy (y/n)? : ";
	GetResponse(userInput);
	cout << endl;

	switch (userInput) {
	case('y'):

		cout << "Good!" << endl << "Does this plan seem to be effective?";

		wasteReductionPolicyScore = 17;

		GetResponse(userInput);

		switch (userInput) {
		case('y'):
			cout << "Great!" << endl << "How may years ago was the last update to the plan?";
			cin >> lastUpdateYear;

			wasteReductionPolicyScore += 10;

			if (lastUpdateYear <= 5) {
				cout << "Awesome!" << endl << "This city seems to be doing a good job in this area.";
				wasteReductionPolicyScore += 6;
			}
			else if (lastUpdateYear <= 15) {
				cout << "Good!" << endl << "This city seems like it should revise the plan soon.";
				wasteReductionPolicyScore += 3;
			}
			else {
				cout << "This city should update this plan very soon";
			}
			break;
		}

		break;

	case('n'):

		cout << "That's unfortunate." << endl << "This would be an area that should be adressed sooner rather than later.";

		break;
	}

	// Score Total
	wasteTotalScore = munWasteScore + recyclingScore + wasteReductionPolicyScore;

	cout << setw(36) << setfill('-') << "Waste Score" << setw(24) << setfill('-') << endl;

	cout << "The score for this city in the 'Waste' category is " << wasteTotalScore << "%." << endl;

	cout << endl;

	if (wasteTotalScore >= 90) {
		cout << "This city seems to be doing an exceptional job at using energy." << endl;
	}
	else if (wasteTotalScore >= 80) {
		cout << "This city seems to be doing a great job at using energy." << endl;
	}
	else if (wasteTotalScore >= 70) {
		cout << "This city seems to be doing a good job at using energy but might need some improvements in the above-mentioned areas." << endl;
	}
	else {
		cout << "This city should immediately look into fixing the above-mentioned issues." << endl;
	}

	cout << endl;


}


