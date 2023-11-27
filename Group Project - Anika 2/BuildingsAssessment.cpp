// BuildingsAssessment.cpp
#include <iostream>
#include "Headers.h"
// Declare variables
void RunBuildingsAssessment() {
  char userInput;
  double kwhBuilding;
  int consumpScore = 0;
  int lastUpdateYear;
  int standardsScore = 0;
  int initsScore = 0;
  int buildingsTotal;

  // Main Header
  std::cout << "---------------------------------------------------------" << std::endl;
  std::cout << "------------------------BUILDINGS------------------------" << std::endl;
  std::cout << "---------------------------------------------------------" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  // Energy consumption of buildings

  // Section Header
  std::cout << "-------ENERGY CONSUMPTION OF RESIDENTIAL BUILDINGS--------" << std::endl;
  std::cout << std::endl;

  std::cout << "Energy consumption of residential buildings per month (This should be between 500 and 1500): ";
  std::cin >> kwhBuilding;
  std::cout << std::endl;

  if (kwhBuilding >= 875 && kwhBuilding <= 890) {
    consumpScore = 22;
    std::cout << "This city seems to be doing a decent job in this area." << std::endl;
    std::cout << std::endl;
  }
  else if (kwhBuilding > 890) {
    consumpScore = 11;
    std::cout << "This city could use some improvement in this area." << std::endl;
    std::cout << std::endl;
  }
  else {
    consumpScore = 33;
    std::cout << "This city seems to be doing a great job in this area." << std::endl;
    std::cout << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  // Energy efficient buildings standards

  // Section Header
  std::cout << "-----------ENERGY EFFICIENT BUILDING STANDARDS------------" << std::endl;
  std::cout << std::endl;

  std::cout << "Does the city have energy-efficient building standards in place? (y/n): " << std::endl;
  GetResponse(userInput);
  std::cout << std::endl;

  switch (userInput) {
  case('y'):
    std::cout << "Good!" << std::endl << "Do these standards seem to be effective?" << std::endl;
    standardsScore = 17;
    GetResponse(userInput);
    switch (userInput) {
    case('y'):
      std::cout << "Great!" << std::endl << "How many years ago was the last update to these standards?" << std::endl;
      std::cin >> lastUpdateYear;
      std::cout << std::endl;
      standardsScore += 10;
      if (lastUpdateYear <= 5) {
        std::cout << "Awesome!" << std::endl << "This city seems to be doing a good job in this area." << std::endl;
        standardsScore += 6;
        std::cout << std::endl;
      }
      else if (lastUpdateYear <= 15) {
        std::cout << "Good!" << std::endl << "This city seems like it should revise these standards soon." << std::endl;
        standardsScore += 3;
      }
      else {
        std::cout << "This city should update these standards very soon" << std::endl;
      }
      break;
    case('n'):
      std::cout << "That's unfortunate." << std::endl << "This would be an area that should be addressed sooner rather than later." << std::endl;
    }
    break;
  case('n'):
    std::cout << "That's unfortunate." << std::endl << "This would be an area that should be addressed sooner rather than later." << std::endl;
    break;
  }

  std::cout << std::endl;

  // Energy-efficient buildings initiatives

  // Section Header
  std::cout << "----------ENERGY EFFICIENT BUILDING INITIATIVES-----------" << std::endl;
  std::cout << std::endl;

  std::cout << "Does the city have energy-efficient building initiatives? (y/n): " << std::endl;
  GetResponse(userInput);
  std::cout << std::endl;

  switch (userInput) {
  case('y'):
    std::cout << "Good!" << std::endl << "Do these energy-efficient building initiatives seem to be effective?" << std::endl;
    initsScore = 17;
    GetResponse(userInput);
    std::cout << std::endl;
    switch (userInput) {
    case('y'):
      std::cout << "Great!" << std::endl << "How many years ago was the last update to the energy-efficient building initiatives?" << std::endl;
      std::cin >> lastUpdateYear;
      initsScore += 10;
      if (lastUpdateYear <= 5) {
        std::cout << "Awesome!" << std::endl << "This city seems to be doing a good job in this area." << std::endl;
        initsScore += 6;
      }
      else if (lastUpdateYear <= 15) {
        std::cout << "Good!" << std::endl << "This city seems like it should revise the energy-efficient building initiatives soon." << std::endl;
        initsScore += 3;
      }
      else {
        std::cout << "This city should update the energy-efficient building initiatives very soon" << std::endl;
      }
      break;
    }
    break;
  case('n'):
    std::cout << "That's unfortunate." << std::endl << "This would be an area that should be addressed sooner rather than later." << std::endl;
    break;
  }

  std::cout << std::endl;

  // Score Total
  buildingsTotal = consumpScore + standardsScore + initsScore;

  std::cout << "------------------------BUILDINGS SCORE------------------" << std::endl;

  std::cout << "The score for this city in the 'Buildings' category is " << buildingsTotal << "%." << std::endl;
  std::cout << std::endl;

  if (buildingsTotal >= 90) {
    std::cout << "This city seems to be doing an exceptional job at having energy-efficient buildings." << std::endl;
  }
  else if (buildingsTotal >= 80) {
    std::cout << "This city seems to be doing a great job of having energy-efficient buildings." << std::endl;
  }
  else if (buildingsTotal >= 70) {
    std::cout << "This city seems to be doing a good job of having energy-efficient buildings but might need some improvements in the above-mentioned areas." << std::endl;
  }
  else {
    std::cout << "This city should immediately look into fixing the above-mentioned issues." << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;
}
