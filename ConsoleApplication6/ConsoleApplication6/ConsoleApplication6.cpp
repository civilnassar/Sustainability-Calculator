// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

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
    double nitrogenDiox;
    double sulfurDiox;
    double ozone;
    double partMat;
    int cleanAirScore = 0;
    char userInput;
    int lastUpdate;

    cout << "How much Nitrogen Dioxide (ppm) is present in the air on average? : ";
    cin >> nitrogenDiox;
    cout << "How much Sulfur Dioxide (ppm) is present in the air on average? : ";
    cin >> sulfurDiox;
    cout << "How much Ozone (ppm) is present in the air on average? : ";
    cin >> ozone;
    cout << "How much particulate matter is present in the air on average? : ";
    cin >> partMat;

    cout << "For the next responses, please type (y) for yes or (n) for no.";
    cout << "Does this city have a plan to minimize air pollution?";

    GetResponse(userInput);

    switch (userInput) {
    case ('y'):
        cout << "Great!" << endl << "Does this plan seem to be working?";
        
        GetResponse(userInput);

        ++cleanAirScore;

        switch (userInput) {
        case ('y'):
            cout << "Great!" << endl << "How may years ago was the last update to the plan? ";
            cin >> lastUpdate;

            ++cleanAirScore;

            if (lastUpdate <= 5) {
                cout << "Awesome!" << endl << "This city seems to be doing a good job in this area.";
                cleanAirScore += 3;
            }
            else if (lastUpdate <= 15) {
                cout << "Good!" << endl << "This city seems like it should revise the plan soon.";
                cleanAirScore += 2;
            }
            else {
                cout << "This city should update this plan very soon";
            }
            break;

        case ('n'):
            cout << "That's unfortunate." << endl << "How may years ago was the last update to the plan?";
            cin >> lastUpdate;

            if (lastUpdate <= 5) {
                cout << "Awesome!" << endl << "This city seems to be doing a good job keeping the plan updated, but might need to change their plan.";
                cleanAirScore += 2;
            }
            else if (lastUpdate <= 15) {
                cout << "Good!" << endl << "This city seems like it should revise the plan soon to help get it back on track.";
                cleanAirScore += 1;
            }
            else {
                cout << "This city should update this plan very soon as to not get further behind.";
            }
            break;
        }
        break;
    case ('n'):
        cout << "That's unfortunate." << endl << "This would be an area that should be adressed sooner rather than later.";

        break;
    }
    cout << endl;

    if (nitrogenDiox <= 0.053) {
        cout << "This city is doing a great job of keeping Nitrogen Dioxide levels low.";
        cleanAirScore += 4;
    }
    else if (nitrogenDiox <= 0.06) {
        cout << "This city is doing a good job of keeping Nitrogen Dioxide level low.";
        cleanAirScore += 3;
    }
    else if (nitrogenDiox <= 0.07) {
        cout << "This city seem like it is doing fine but might want to start thinking about working on a plan to lower the Nitrogen Dioxide levels.";
        cleanAirScore += 2;
    }
    else if (nitrogenDiox <= 0.08) {
        cout << "This city needs to look into drastically lowering the Nitrogen Dioxide levels very soon.";
        cleanAirScore += 1;
    }
    else {
        cout << "This city is doing a poor job of keeping Nitrogen Dioxide levels low.";
    }

    cout << endl;

    if (sulfurDiox <= 0.03) {
        cout << "This city is doing a great job of keeping Sulfur Dioxide levels low.";
        cleanAirScore += 4;
    }
    else if (sulfurDiox <= 0.035) {
        cout << "This city is doing a good job of keeping Sulfur Dioxide level low.";
        cleanAirScore += 3;
    }
    else if (sulfurDiox <= 0.04) {
        cout << "This city seem like it is doing fine but might want to start thinking about working on a plan to lower the Sulfur Dioxide levels.";
        cleanAirScore += 2;
    }
    else if (sulfurDiox <= 0.045) {
        cout << "This city needs to look into drastically lowering the Sulfur Dioxide levels very soon.";
        cleanAirScore += 1;
    }
    else {
        cout << "This city is doing a poor job of keeping Sulfur Dioxide levels low.";
    }

    cout << endl;

    if (ozone <= 0.07) {
        cout << "This city is doing a great job of keeping Ozone levels low.";
        cleanAirScore += 4;
    }
    else if (ozone <= 0.075) {
        cout << "This city is doing a good job of keeping Ozone level low.";
        cleanAirScore += 3;
    }
    else if (ozone <= 0.08) {
        cout << "This city seem like it is doing fine but might want to start thinking about working on a plan to lower the Ozone levels.";
        cleanAirScore += 2;
    }
    else if (ozone <= 0.085) {
        cout << "This city needs to look into drastically lowering the Ozone levels very soon.";
        cleanAirScore += 1;
    }
    else {
        cout << "This city is doing a poor job of keeping Ozone levels low.";
    }

    cout << endl;

    if (partMat <= 0.07) {
        cout << "This city is doing a great job of keeping Particulate Matter levels low.";
        cleanAirScore += 4;
    }
    else if (partMat <= 0.075) {
        cout << "This city is doing a good job of keeping Particulate Matter level low.";
        cleanAirScore += 3;
    }
    else if (partMat <= 0.08) {
        cout << "This city seem like it is doing fine but might want to start thinking about working on a plan to lower the Particulate Matter levels.";
        cleanAirScore += 2;
    }
    else if (partMat <= 0.085) {
        cout << "This city needs to look into drastically lowering the Particulate Matter levels very soon.";
        cleanAirScore += 1;
    }
    else {
        cout << "This city is doing a poor job of keeping Particulate Matter levels low.";
    }

    cout << endl;

    cleanAirScore = cleanAirScore * 5;

    if (cleanAirScore >= 90) {
        cout << "This city seems to be doing an exceptional job at keeping its environmental impact as low as possible.";
    }
    else if (cleanAirScore >= 80) {
        cout << "This city seems to be doing a great job of minimizing its environmental impact.";
    }
    else if (cleanAirScore >= 70) {
        cout << "This city seems to be doing a good job of minimizing its environmental impact but might need some improvements in the above mentioned areas.";
    }
    else {
        cout << "This city should immediately look into fixing the above mentioned issues.";
    }

    cout << endl;

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
