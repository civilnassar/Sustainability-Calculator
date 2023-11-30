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
#include <fstream>
#include "C:\Users\calic\Downloads\Headers.h"
using namespace std;

string scoreLine;
void GetResponse(char& userInput) {

    cin >> userInput;

    while (userInput != 'y' && userInput != 'n') {

        cout << "Invalid response. Please respond with (y) for yes or (n) for no.";

        cin >> userInput;
    }
}

int main()
{
    float numPop;
    string cityName;
    int buildingScore, co2Score, waterScore, airScore, energyScore, governanceScore, transportScore, wasteScore, totalScore;
    string scoreLine;

    cout << "What is the name of this city?: ";
    getline(cin, cityName);

    cout << "What is the population of this city?: ";
    cin >> numPop;

    ofstream outputFile("City Sustainability Scores.txt", ios::app);

if (!outputFile.is_open()) {
  cout << "Error opening the file!" << endl;
  return 1; // Return an error code
}

 outputFile.close();
    RunBuildingsAssessment();

    runCarbonEmissionsAssessment(numPop, cityName);

    runWasteAssessment();

    runTransportAssessment();

    GetWaterScore(numPop);

    GetAirQualityScore();

    RunEnvironmentalGovernanceAssessment();

    RunEnergyAssessment();

    ifstream inputFile("City Sustainability Scores.txt");

    inputFile >> buildingScore;

    inputFile >> co2Score;

    inputFile >> wasteScore;

    inputFile >> transportScore;

    inputFile >> waterScore;

    inputFile >> airScore;

    inputFile >> governanceScore;

    inputFile >> energyScore;

    totalScore = (buildingScore + co2Score + waterScore + airScore + energyScore + governanceScore + transportScore + wasteScore) / 8;

    ofstream outputFileAppend("City Sustainability Scores.txt", ios::app);

if (!inputFile.is_open()) {
  cout << "Error opening the file!" << endl;
  return 1; // Return an error code
}

cout<< "The total score for each category is as follows:" << endl;
// Read and print each line of the file
while (getline(inputFile, scoreLine)) {
  cout << scoreLine << endl;
}

inputFile.close();
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
