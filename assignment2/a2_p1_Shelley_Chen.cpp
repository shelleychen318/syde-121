/*
Name: Shelley Chen
Student ID: 21002650
Date: September 27, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 2 Problem #1
Program Description: Program that implements the Babylion algorithm to compute the square root of a number.
*/

#include <iostream>
using namespace std;

int main()
{
    // declare and initialize variables
    double n, r, guess, prevGuess, guessDiff = 0;
    bool play = true;

    cout << "Enter a non-zero integer: ";
    cin >> n;
    guess = n / 2;
    prevGuess = n;

    // boolean variable to control loop
    while (play)
    {
        r = n / guess;
        guess = (guess + r) / 2;
        guessDiff = (guess - prevGuess) / prevGuess; // calculate percent difference of current and previous guess
        prevGuess = guess;

        // checks percent difference, and exits loop if necessary
        if (guessDiff < 0.005)
        {
            play = false;
        }
    }
    cout << guess << endl;
}