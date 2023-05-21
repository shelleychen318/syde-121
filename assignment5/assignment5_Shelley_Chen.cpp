/*
Name: Shelley Chen
Student ID: 21002650
Date: November 4, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 5
Program Description: Program that reads input from a file and writes data to a file.
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open("input5.txt");
    out_stream.open("output5.txt");

    if (in_stream.fail())
    {
        cout << "Input file opening failed\n";
        exit(1);
    }

    if (out_stream.fail())
    {
        cout << "Output file opening failed\n";
        exit(1);
    }

    // write data to the output file, left align the text
    out_stream << left << setw(8) << "x" << left << setw(8) << "x^2" << left << setw(8) << "Current Sum" << endl;
    out_stream << left << setw(8) << "===" << left << setw(8) << "===" << left << setw(8) << "===========" << endl;

    // print data to screen
    cout << left << setw(8) << "x" << left << setw(8) << "x^2" << left << setw(8) << "Current Sum" << endl;
    cout << left << setw(8) << "===" << left << setw(8) << "===" << left << setw(8) << "===========" << endl;

    int num, sum = 0;

    // read each line in file and shift value to num
    while (in_stream >> num)
    {
        sum += num; // keep running total of numbers
        out_stream << left << setw(8) << num << left << setw(8) << (pow(num, 2)) << left << setw(8) << sum << endl;
        cout << left << setw(8) << num << left << setw(8) << (pow(num, 2)) << left << setw(8) << sum << endl;
    }

    out_stream << "The average of these numbers is: " << sum / 8.0 << endl;
    cout << "The average of these numbers is: " << sum / 8.0 << endl;

    in_stream.close();
    out_stream.close();

    return 0;
}