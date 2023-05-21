/*
Name: Shelley Chen
Student ID: 21002650
Date: September 27, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 2 Problem #2
Program Description: Program that calculates the sum of all the odd integers from 1 to 100.
*/

#include <iostream>
using namespace std;

int main()
{
    int oddNum = 1, sum = 0;

    // iterate through integers 1 to 100
    while (oddNum < 100)
    {
        sum += oddNum; // keep a running sum of odd numbers
        oddNum += 2; // get the next odd number
    }
    cout << "Sum of the odd integers from 1-100 (using while loop): " << sum << endl;

    int sum2, n = 50, a = 1, d = 2;

    sum2 = (n / 2) * (2 * a + (n - 1) * d);
    cout << "Sum of the odd integers from 1-100 (using formula): " << sum2 << endl;
}