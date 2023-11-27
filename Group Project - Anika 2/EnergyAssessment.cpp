// EnergyAssessment.cpp
#include <iostream>
#include "Headers.h"
void RunEnergyAssessment() {
  char userInput;
  double kwhPerson;
  int consumpEnergyScore = 0;
  int renewEnergy;
  int renewEnergyScore = 0;
  int policiesScore = 0;
  int updateYear;
  int energyScoreTotal;

  std::cout << "---------------------------------------------------------" << std::endl;
  std::cout << "--------------------------ENERGY--------------------------" << std::endl;
  std::cout << "---------------------------------------------------------" << std::endl;

  

  // Energy consumption per Person per day
  std::cout << "-----------------ENERGY CONSUMPTION SCORE-----------------" << std::endl;

  std::cout << "Energy consumption (kWh) of residential buildings per person per month (This number should be between 2 and 20): ";
  std::cin >> kwhPerson;

  std::cout << std::endl;

  if (kwhPerson >= 10 && kwhPerson <= 14) {
    consumpEnergyScore = 22;
    std::cout << "This city seems to be doing a decent job in this area." << std::endl;
  }
  else if (kwhPerson > 14) {
    consumpEnergyScore = 11;
    std::cout << "This city could use some improvement in this area." << std::endl;
  }
  else {
    consumpEnergyScore = 33;
    std::cout << "This city seems to be doing a great job in this area." << std::endl;
  }

  std::cout << std::endl;

  // Renewable energy consumption
  std::cout << "----------------RENEWABLE ENERGY CONSUMPTION-------------" << std::endl;

  std::cout << "What percentage of energy consumption is fulfilled by renewable energy? : ";
  std::cin >> renewEnergy;

  std::cout << std::endl;

  if (renewEnergy >= 15 && renewEnergy <= 20) {
    renewEnergyScore = 22;
    std::cout << "This city seems to be doing a decent job in this area." << std::endl;
  }
  else if (renewEnergy > 15) {
    renewEnergyScore = 11;
    std::cout << "This city could use some improvement in this area." << std::endl;
  }
  else {
    renewEnergyScore = 33;
    std::cout << "This city seems to be doing a great job in this area." << std::endl;
  }

  std::cout << std::endl;

  // Clean and efficient energy policies
  std::cout << "------CLEAN AND EFFICIENT ENERGY POLICIES SCORE----------" << std::endl;

  std::cout << "Does the city have clean and efficient energy policies in place? (y/n): ";
  GetResponse(userInput);

  std::cout << std::endl;

  switch (userInput) {
  case('y'):
    std::cout << "Good!" << std::endl << "Do these clean and efficient energy policies seem to be effective?" << std::endl;

    policiesScore = 17;

    GetResponse(userInput);

    std::cout << std::endl;

    switch (userInput) {
    case('y'):
      std::cout << "Great!" << std::endl << "How many years ago was the last update to the clean and efficient energy policies?" << std::endl;
      std::cin >> updateYear;

      policiesScore += 10;

      if (updateYear <= 5) {
        std::cout << "Awesome!" << std::endl << "This city seems to be doing a good job in this area." << std::endl;
        policiesScore += 6;
      }
      else if (updateYear <= 15) {
        std::cout << "Good!" << std::endl << "This city seems like it should revise the clean and efficient energy policies." << std::endl;
        policiesScore += 3;
      }
      else {
        std::cout << "This city should update the clean and efficient energy policies very soon" << std::endl;
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
  energyScoreTotal = consumpEnergyScore + renewEnergyScore + policiesScore;

  std::cout << "------------------------ENERGY SCORE----------------------" << std::endl;

  std::cout << "The score for this city in the 'Energy' category is " << energyScoreTotal << "%." << std::endl;

  std::cout << std::endl;

  if (energyScoreTotal >= 90) {
    std::cout << "This city seems to be doing an exceptional job at using energy." << std::endl;
  }
  else if (energyScoreTotal >= 80) {
    std::cout << "This city seems to be doing a great job at using energy." << std::endl;
  }
  else if (energyScoreTotal >= 70) {
    std::cout << "This city seems to be doing a good job at using energy but might need some improvements in the above-mentioned areas." << std::endl;
  }
  else {
    std::cout << "This city should immediately look into fixing the above-mentioned issues." << std::endl;
  }

  std::cout << std::endl;
}
