// EnvironmentalGovernanceAssessment.cpp
#include <iostream>
#include "Headers.h"
void RunEnvironmentalGovernanceAssessment() {
  char userInput;
  double kwhPerson;
  int greenPlanScore = 0;
  int greenPlanYear;
  int managScore = 0;
  int publicScore = 0;
  int envScoreTotal;

  std::cout << "---------------------------------------------------------" << std::endl;
  std::cout << "-----------------ENVIRONMENTAL GOVERNANCE-----------------" << std::endl;
  std::cout << "---------------------------------------------------------" << std::endl;


  // Green action plan
  std::cout << "----------------------GREEN ACTION PLAN-------------------" << std::endl;

  std::cout << "Does the government have an action plan currently in place? (y/n): ";
  GetResponse(userInput);

  switch (userInput) {
  case('y'):
    std::cout << "Good!" << std::endl << "How long ago was this plan first put into place? (Enter year): ";
    greenPlanScore = 17;
    std::cin >> greenPlanYear;
    std::cout << std::endl;

    if (greenPlanYear >= 10) {
      std::cout << "Awesome!" << std::endl << "This city seems to be doing a great job in this area." << std::endl;
      greenPlanScore += 15;
    }
    else if (greenPlanYear >= 5) {
      std::cout << "Great!" << std::endl << "This city seems to be doing a good job in this area." << std::endl;
      greenPlanScore += 10;
    }
    else {
      std::cout << "Good!" << std::endl << "Sounds like this city is doing a good job of getting on track." << std::endl;
      greenPlanScore += 6;
    }
    break;

  case('n'):
    std::cout << "That's unfortunate." << std::endl << "Try to see about getting a plan in place." << std::endl;
    greenPlanScore = 0;
    break;
  }

  std::cout << std::endl;

  // Green Management
  std::cout << "----------------------GREEN MANAGEMENT-------------------" << std::endl;

  std::cout << "Is there a green management team?  (y/n): ";
  GetResponse(userInput);

  switch (userInput) {
  case('y'):
    std::cout << "Good!" << std::endl << "Is this team full time? (y/n): ";
    GetResponse(userInput);

    switch (userInput) {
    case('y'):
      std::cout << "Awesome!" << std::endl << "This city seems to be doing a great job in this area." << std::endl;
      managScore += 33;
      break;
    case('n'):
      std::cout << "That's alright." << std::endl << "It's good that you've got a part-time team though!" << std::endl;
      managScore = 17;
      break;
    }
    break;
  case('n'):
    std::cout << "That's unfortunate." << std::endl << "This city could use some improvement in this area." << std::endl;
    managScore = 0;
    break;
  }

  std::cout << std::endl;

  // Public Participation in Green Policy
  std::cout << "----PUBLIC PARTICIPATION IN GREEN POLICY OPPORTUNITIES----" << std::endl;

  std::cout << "Is the public provided with opportunities to participate in enacting Green Policies?  (y/n): ";
  GetResponse(userInput);

  switch (userInput) {
  case('y'):
    std::cout << "Awesome!" << std::endl << "This city seems to be doing a great job in this area." << std::endl;
    publicScore = 33;
    break;
  case('n'):
    std::cout << "That's unfortunate." << std::endl << "The public should be provided with opportunities to participate in enacting Green Policies." << std::endl;
    publicScore = 0;
    break;
  }

  std::cout << std::endl;

  // Score Total
  envScoreTotal = publicScore + managScore + greenPlanScore;

  std::cout << "------------------------ENERGY SCORE----------------------" << std::endl;
  std::cout << std::endl;

  std::cout << "The score for this city in the 'Energy' category is " << envScoreTotal << "%." << std::endl;

  std::cout << std::endl;

  if (envScoreTotal >= 90) {
    std::cout << "This city seems to be doing an exceptional job at using energy." << std::endl;
  }
  else if (envScoreTotal >= 80) {
    std::cout << "This city seems to be doing a great job of at using energy." << std::endl;
  }
  else if (envScoreTotal >= 70) {
    std::cout << "This city seems to be doing a good job of at using energy but might need some improvements in the above-mentioned areas." << std::endl;
  }
  else {
    std::cout << "This city should look into fixing the above-mentioned issues." << std::endl;
  }

  std::cout << std::endl;
}
