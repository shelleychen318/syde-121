/*
Name: Shelley Chen
Student ID: 21002650
Date: September 22, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 2 Problem #3
Program Description: Program that prompts user to enter integers and determines if they are even or odd.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, mod_a, mod_b;

    // forces user to enter only positive non-zero ints
    do 
    {
        cout << "Enter a positive non-zero integer: ";
        cin >> a;
    } while (a <= 0);

    do
    {
        cout << "Enter a positive non-zero integer: ";
        cin >> b;
    } while (b <= 0);

    // determine if integers are even or odd 
    mod_a = a % 2;
    mod_b = b % 2;

    // checks if both integers are even
    if (mod_a == 0 && mod_b == 0)
        cout << (a + b) << endl;
    // checks if one is even and the other is odd
    else if (mod_a == 0 || mod_b == 0) 
        cout << a << endl;
    else // both integers are odd
        cout << b << endl;
}