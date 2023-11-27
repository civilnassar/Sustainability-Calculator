// Group Project - Anika 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "Headers.h"
using namespace std;

void GetResponse(char& userInput) {
  std::cin >> userInput;

  while (userInput != 'y' && userInput != 'n') {
    std::cout << "Invalid response. Please respond with yes or no." << endl;
    std::cin >> userInput;
  }
}


int main() {

  RunBuildingsAssessment();
  RunEnergyAssessment();
  RunEnvironmentalGovernanceAssessment();

  return 0;
}