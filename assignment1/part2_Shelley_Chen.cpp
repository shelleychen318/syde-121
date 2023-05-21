/*
Name: Shelley Chen
Student ID: 21002650
Date: September 20, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment Number: 1
Exercise Number: 2
Filename: part2_Shelley_Chen.cpp
Name of C++ Project: Assignment 1.2
Program Description: Program that takes in a temperature in Farenheit from the user and converts it to Centigrade.
*/

#include <iostream>
using namespace std;

int main()
{
    double temp_f, temp_c;

    cout << "Enter the temperature in Farenheit: ";
    cin >> temp_f;
    temp_c = (temp_f - 32) * 0.5556;
    cout << temp_f << " F is " << temp_c << " C" << endl;
    return 0;
}