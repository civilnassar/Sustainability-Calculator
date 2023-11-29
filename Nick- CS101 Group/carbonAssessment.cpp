

#include <iostream>
#include <iomanip>
#include <string>
#include "nick_header_files.h"
using namespace std;



void runCarbonEmissionsAssessment() {
    float carbonIntensity = 0;
    float energyEmissions = 0;
    float energyProduced = 0;
    float totalc02emissions = 0;
    float emissionsPerCapita = 0;
    char userInput;
    int lastUpdateYear = 0;
    int co2Score = 0;
    int totalEmissionsScore = 0;
    

    

    
    // c02 intensity and emissions calculation
    cout << "What were total emissions (in metric tons of C02e) involved in energy production for your city? ";
    cin >> energyEmissions;
    cout << endl;

    cout << "How much power (in gWh) did your city produce over the year? ";
    cin >> energyProduced;
    cout << endl;

    cout << "According to your data, the C02 intensity for your city was " << CarbonIntensityCalc(energyEmissions, energyProduced);
    cout << " metric tons of C02 per gigawatt-hour.\n";

    cout << "How much total c02 was produced by your city? ";
    cin >> totalc02emissions;
    cout << endl;

    cout << "According to your data, C02 emissions per capita for your city were ";
    cout << c02PerCapita(population, totalc02emissions) << " metric tons of C02e per person.\n";

    // update values
    carbonIntensity = CarbonIntensityCalc(energyEmissions, energyProduced);
    emissionsPerCapita = c02PerCapita(population, totalc02emissions);

    // c02 reduction strategy

    cout << "The next few questions will require a yes or no input (y/n).\n";
    cout << "Does " << cityName << " have a strategy for reducing their production of C02?";
    GetResponse(userInput);
    
    switch (userInput) {
    case('y'):

        cout << "Good!" << endl << "Does this plan seem to be effective?";

        co2Score += 2;

        GetResponse(userInput);

        switch (userInput) {
        case('y'):
            cout << "Great!" << endl << "How may years ago was the last update to the plan?";
            cin >> lastUpdateYear;

            ++co2Score;

            if (lastUpdateYear <= 5) {
                cout << "Awesome!" << endl << "This city seems to be doing a good job in this area.";
                co2Score += 2; 
            }
            else if (lastUpdateYear <= 15) {
                cout << "Good!" << endl << "This city seems like it should revise the plan soon.";
                co2Score += 1; 
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

    cout << endl << endl;

    totalEmissionsScore = (co2Score + intensityRating(carbonIntensity)) * 10;
    printEmissionsSummary(totalEmissionsScore, cityName);

}


