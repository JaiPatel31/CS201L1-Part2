// CS201L1-Part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

// distance function
double distanceFromOrigin(int x, int y) { return sqrt(x * x + y * y); }

int main() {
    int arr[2][2];
    bool exit = false;
    char userAwnser = 'y';
    // making a loop to rerun the program if the user want to.

    srand(time(0));//generates new seed for random numbers. 
    while (!exit) {
        cout << "Would you like to enter your own coordinate points?(y/n)" << endl;
        cin >> userAwnser;

        // if the user wants to enter their own coordinate points.
        if (userAwnser == 'y' || userAwnser == 'Y') {
            cout << "Enter your cooridnate points putting a space inbetween each number.(1 2 3 4)=>(1,2)(3,4). Make sure that they are integers and beetween -10 and 10 " << endl;


            // entering the cooridnates into the array
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    cin >> arr[i][j];
                    if (arr[i][j] < -10 || arr[i][j]>10) {
                        cout << "Invalid input. Please enter a number between -10 and 10." << endl;
                        cin >> arr[i][j];
                    }
                }
            }




            //checking if all inputs are intergers

            // printing the distance from the origin
            cout << "(" << arr[0][0] << "," << arr[0][1] << ")"
                << " is " << fixed << setprecision(2)
                << distanceFromOrigin(arr[0][0], arr[0][1]) << " from the origin."
                << endl;
            cout << "(" << arr[1][0] << "," << arr[1][1] << ")"
                << " is " << fixed << setprecision(2)
                << distanceFromOrigin(arr[1][0], arr[1][1]) << " from the origin."
                << endl;

            // checking which one is closer to the origin using the function.
            if (distanceFromOrigin(arr[0][0], arr[0][1]) >
                distanceFromOrigin(arr[1][0], arr[1][1])) {
                cout << "(" << arr[1][0] << "," << arr[1][1] << ")"
                    << " is closer to the origin." << endl;
            }
            else if (distanceFromOrigin(arr[0][0], arr[0][1]) <
                distanceFromOrigin(arr[1][0], arr[1][1])) {
                cout << "(" << arr[0][0] << "," << arr[0][1] << ")"
                    << " is closer to the origin." << endl;
            }
            else {
                cout << "(" << arr[0][0] << "," << arr[0][1] << ")"
                    << " and "
                    << "(" << arr[1][0] << "," << arr[1][1] << ")"
                    << " are the same distance from the origin." << endl;
            }

            // if user wants to generate points
        }
        else {
            // generating random points
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    arr[i][j] = -10 + rand() % 21;
                }
            }
            // printing the distance from the origin
            cout << "(" << arr[0][0] << "," << arr[0][1] << ")"
                << " is " << fixed << setprecision(2)
                << distanceFromOrigin(arr[0][0], arr[0][1]) << " from the origin."
                << endl;
            cout << "(" << arr[1][0] << "," << arr[1][1] << ")"
                << " is " << fixed << setprecision(2)
                << distanceFromOrigin(arr[1][0], arr[1][1]) << " from the origin."
                << endl;

            // checking which one is closer to the origin using the function.
            if (distanceFromOrigin(arr[0][0], arr[0][1]) >
                distanceFromOrigin(arr[1][0], arr[1][1])) {
                cout << "(" << arr[1][0] << "," << arr[1][1] << ")"
                    << " is closer to the origin." << endl;
            }
            else if (distanceFromOrigin(arr[0][0], arr[0][1]) <
                distanceFromOrigin(arr[1][0], arr[1][1])) {
                cout << "(" << arr[0][0] << "," << arr[0][1] << ")"
                    << " is closer to the origin." << endl;
            }
            else {
                cout << "(" << arr[0][0] << "," << arr[0][1] << ")"
                    << " and "
                    << "(" << arr[1][0] << "," << arr[1][1] << ")"
                    << " are the same distance from the orign." << endl;
            }
        }
        // asking the user if they want to run the program again.
        cout << "Would you like to run the program again?(y/n)" << endl;
        cin >> userAwnser;
        if (userAwnser == 'n' || userAwnser == 'N') {
            exit = true;
        }
    }
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
