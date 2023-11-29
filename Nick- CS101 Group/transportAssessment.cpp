#include <iostream>
#include <string>
#include <iomanip>
#include "C:\Users\nncmo\OneDrive\Desktop\nick_header_files.h"
using namespace std;

void runTransportAssessment() {

	// Declare Variables
	char userInput;
	int percentNonCarTransport;
	int noncarTransportScore;
	int lastUpdateYear;
	int coverageOfPublicTransNetwork;
	int publicTransScore;
	int congestionReductionPolicyScore;
	int transportTotalScore;
	
	// Non-Car Transport
	// section header

	cout << setw(60) << setfill('-') << endl;
	cout << setw(42) << setfill('-') << "Use of non-car transport" << setw(18) << setfill('-') << endl;
	cout << setw(60) << setfill('-') << endl;
	cout << endl << endl;
	
	cout << "What percentage of this city uses non-car transportation?\n";
	cout << "Note: average in US is 24 percent: ";
	cin >> percentNonCarTransport;
	cout << endl;

	if (percentNonCarTransport >= 21 && percentNonCarTransport <= 27) {
			noncarTransportScore = 22;
			cout << "This city seems to be doing a decent job in this area." << endl;
			cout << endl;
		}
	else if (percentNonCarTransport < 21) {
			noncarTransportScore = 11;
			cout << "This city could use some improvement in this area." << endl;
			cout << endl;
		}
	else {
			noncarTransportScore = 33;
			cout << "This city seems to be doing a great job in this area." << endl;
			cout << endl;
		}
	cout << endl << endl;

	//coverage of public transportation
	// section header
	cout << setw(45) << setfill('-') << "Public Transportation Coverage" << setw(15) << setfill('-');
	cout << endl << endl << endl;

	cout << "What percentage of this city is covered by public transportation networks? : ";
	cin >> coverageOfPublicTransNetwork;
	cout << endl;

	if (coverageOfPublicTransNetwork >= 25 && coverageOfPublicTransNetwork <= 30) {
		publicTransScore = 22;
		cout << "This city seems to be doing a decent job in this area." << endl;
		cout << endl;
	}
	else if (coverageOfPublicTransNetwork < 25) {
		publicTransScore = 11;
		cout << "This city could use some improvement in this area." << endl;
		cout << endl;
	}
	else {
		publicTransScore = 33;
		cout << "This city seems to be doing a great job in this area." << endl;
		cout << endl;
	}
	cout << endl << endl;

	// congestion reduction policies
	// section header

	cout << setw(43) << setfill('-') << "Congestion Reduction Policy" << setw(17) << setfill('-');
	cout << endl << endl << endl;

	cout << "Does this city have a congestion reduction policy (y/n)? : ";
	GetResponse(userInput);
	cout << endl;

	switch (userInput) {
	case('y'):

		cout << "Good!" << endl << "Does this plan seem to be effective?";

		congestionReductionPolicyScore = 17;

		GetResponse(userInput);

		switch (userInput) {
		case('y'):
			cout << "Great!" << endl << "How may years ago was the last update to the plan?";
			cin >> lastUpdateYear;

			congestionReductionPolicyScore += 10;

			if (lastUpdateYear <= 5) {
				cout << "Awesome!" << endl << "This city seems to be doing a good job in this area.";
				congestionReductionPolicyScore += 6;
			}
			else if (lastUpdateYear <= 15) {
				cout << "Good!" << endl << "This city seems like it should revise the plan soon.";
				congestionReductionPolicyScore += 3;
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

	// Total score for section
	transportTotalScore = noncarTransportScore + publicTransScore + congestionReductionPolicyScore;
	
	cout << setw(40) << setfill('-') << "Transportation Score" << setw(20) << setfill('-');
	cout << endl;

	cout << "The score for this city in the 'Waste' category is " << transportTotalScore << "%." << endl;

	cout << endl;



	if (transportTotalScore >= 90) {
		cout << "This city seems to be doing an exceptional job at using energy." << endl;
	}
	else if (transportTotalScore >= 80) {
		cout << "This city seems to be doing a great job at using energy." << endl;
	}
	else if (transportTotalScore >= 70) {
		cout << "This city seems to be doing a good job at using energy but might need some improvements in the above-mentioned areas." << endl;
	}
	else {
		cout << "This city should immediately look into fixing the above-mentioned issues." << endl;
	}

	cout << endl;
}