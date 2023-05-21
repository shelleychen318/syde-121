/*
Name: Shelley Chen
Student ID: 21002650
Date: September 20, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment Number: 1
Exercise Number: 1
Filename: part1_Shelley_Chen.cpp
Name of C++ Project: Assignment 1.1
Program Description: Hello World program that takes in user's name and student ID to output a customized message.
*/

#include <iostream>
using namespace std;

int main()
{
    string name;
    int student_id;

    cout << "What is your name?\n";
    cin >> name;
    cout << "What is your student ID?\n";
    cin >> student_id;
    cout << "Hello World from " << name << " with Student ID " << student_id << endl;
    return 0;
}