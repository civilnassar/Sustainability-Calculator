

#include <iostream>
#include <string>
#include <iomanip>
#include "C:\Users\nncmo\OneDrive\Desktop\nick_header_files.h"
using namespace std;

void GetResponse(char& userInput) {

    cin >> userInput;
    userInput = tolower(userInput);
    while (userInput != 'y' && userInput != 'n') {

        cout << "Invalid response. Please respond with yes or no (y/n).";
        cin >> userInput;
    }
}
float CarbonIntensityCalc(float& energyEmissions, float& energyProduced) {
    return energyEmissions / energyProduced;
}

float c02PerCapita(float& population, float& totalC02) {
    return totalC02 / population;
}

int intensityRating(int carbonInt) {
    int intensityScore = 0;

    if (carbonInt <= 200) {
        intensityScore = 100;
    }
    else if (carbonInt <= 400) {
        intensityScore = 80;
    }
    else if (carbonInt <= 600) {
        intensityScore = 60;
    }
    else if (carbonInt <= 800) {
        intensityScore = 40;
    }
    else {
        intensityScore = 20;
    }
    return intensityScore;
}
void printEmissionsSummary(int totalEmScore, string city) {
    if (totalEmScore >= 90) {
        cout << "Fantastic! " << city << "'s score for this section is " << totalEmScore << ". Keep up the good work!\n";
    }
    else if (totalEmScore >= 80) {
        cout << "Great! " << city << "'s score for this section is " << totalEmScore << ". It could use a little work, but this is still quite good.\n";
    }
    else if (totalEmScore >= 70) {
        cout << "Good! " << city << "'s score for this section is " << totalEmScore << ". This is an okay score, but your city should look into updating their plan very soon.\n";
    }
    else {
        cout << "Bad news! " << city << "'s score for this section is " << totalEmScore << ". This is below the standard for green cities, and this city needs to update their plan immediately.\n";
    }
}

int main() {
    cityDetails();
    runCarbonEmissionsAssessment();
    runTransportAssessment();
    runWasteAssessment();

    return 0;
}

