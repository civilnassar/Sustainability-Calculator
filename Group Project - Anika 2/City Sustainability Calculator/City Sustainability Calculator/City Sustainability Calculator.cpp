// City Sustainability Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*TO DO: 
get I/O file working
make output statements more uniform
get scoreing system working
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "C:\Users\calic\Downloads\Headers.h"
using namespace std;

void GetResponse(char& userInput) {

    cin >> userInput;

    while (userInput != 'y' && userInput != 'n') {

        cout << "Invalid response. Please respond with yes or no.";

        cin >> userInput;
    }
}

int main()
{
    float numPop;
    string cityName;

    cout << "What is the name of this city?: " << endl;
    getline(cin, cityName);

    cout << "What is the population of this city?: " << endl;
    cin >> numPop;

    RunBuildingsAssessment();

    runCarbonEmissionsAssessment(numPop, cityName);

    runWasteAssessment();

    runTransportAssessment();

    GetWaterScore(numPop);

    GetAirQualityScore();

    RunEnvironmentalGovernanceAssessment();

    RunEnergyAssessment();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
