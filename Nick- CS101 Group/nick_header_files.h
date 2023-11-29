#ifndef MY_HEADER_FILES
#define MY_HEADER_FILES


using namespace std;

float population = 0;
string cityName;
int cityYear = 0;
void cityDetails();
void runCarbonEmissionsAssessment();
void runWasteAssessment();
void runTransportAssessment();


void GetResponse(char& userInput);

float CarbonIntensityCalc(float& energyEmissions, float& energyProduced);

float c02PerCapita(float& population, float& totalC02);

int intensityRating(int carbonInt);

void printEmissionsSummary(int totalEmScore, string cityName);
#endif