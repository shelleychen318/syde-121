/*
Name: Shelley Chen
Student ID: 21002650
Date: September 20, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment Number: 1
Exercise Number: 3
Filename: part3_Shelley_Chen.cpp
Name of C++ Project: Assignment 1.3
Program Description: Program that guides user to enter a number within a specific range.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Please enter a positive number less than 10.\n";
    cin >> num;

    while (num < 5 || num >= 10) // while number is outside the range
    {
        cout << "The number you entered is not in the range\n";
        cout << "Please enter a positive number less than 10.\n";
        cin >> num;
    }

    cout << "The number you entered is in the range.\n";
    return 0;
}