/*
Name: Shelley Chen
Student ID: 21002650
Date: October 4, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 3
Program Description: Program that computes measurements of cylinders and spheres depending on the user's selection.
*/

#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159; // this variable is defined globally, known to all functions in this program as PI
const double conversion = 0.3937; // this is the cm to inch conversion factor

// function declarations
double convert(double measurement);
double side_area (double r, double h);
double calculation(double r, double side, int extra);
double calculation(double side, double r);
double calculation2(double r);
double calculation2(double r, int choice);

int main(void)
{
    // variables local to the main function
    double h, r, side, total, volume, surface; 
    int choice, calc_choice;

    // do while loop forces user to enter a valid choice for cylinder or sphere
    do
    {
        cout << "Enter 1 to choose cylinder or 2 for sphere: ";
        cin >> choice;

        // user chooses cylinder
        if (choice == 1)
        {
            cout << "Enter the radius and the height of the cylinder in Cm <Enter> ";
            cin >> r >> h;
            cout << "Before I do any computation or call any function, I want to let you know that \n";
            cout << "you have entered r = " << r << " and h = " << h << "." << endl;

            // convert radius and height to inches
            r = convert(r);
            h = convert(h);

            cout << "After converting your measurements to inches, r = " << r << " and h = " << h << endl;

            // calculate side area, total area, and volume for cylinder
            side = side_area(r, h);
            total = calculation(side, r, 1);
            volume = calculation(r, h);

            // print out results
            cout << "The side area is " << side << " inches squared" << endl;
            cout << "The total area is " << total << " inches squared" << endl;
            cout << "The volume is " << volume << " inches cubed" << endl;
        }
        // user chooses sphere
        else if (choice == 2)
        {
            cout << "Enter the radius of the sphere in Cm <Enter> ";
            cin >> r;

            cout << "Before I do any computation or call any function, I want to let you know that \n";
            cout << "you have entered r = " << r << "." << endl;

            r = convert(r); // convert radius 

            // calculate the surface area and volume for sphere
            surface = calculation2(r);
            volume = calculation2(r, 1);

            // print out results
            cout << "The surface area is " << surface << " inches squared" << endl;
            cout << "The volume is " << volume << " inches cubed" << endl;
        }
        // if user enters a number other than 1 or 2, tell them their choice is invalid
        else
        {
            cout << "Invalid Choice" << endl;
        }
    } while (choice < 1 || choice > 2);

    return 0;
}

// function to convert from cm to inches
double convert(double measurement)
{
    measurement = measurement * conversion; // converting measurement to inch
    return measurement;
}

// calculates side area of cylinder
double side_area (double r, double h)
{
    double side_area = (2 * PI * r) * h;
    return side_area;
}

// calculates total area of cylinder
double calculation(double side, double r, int extra)
{
    double total = 2 * (PI * r * r) + side;
    return total;
}

// calculates volume of cylinder
double calculation(double r, double h)
{
    double volume = (PI*r*r)*h;
    return volume;
}

// calculates surface area of sphere
double calculation2(double r)
{
    return 4*PI*r*r;    
}

// calculates volume of sphere 
double calculation2(double r, int choice)
{
    return (4.0/3.0)*PI*r*r*r;
}