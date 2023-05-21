// P3_3.cpp This program illustrates the local and global variables and call-by-value.
// This program computes the side area and the cross section area of a cylinder
#include<iostream>
#include<cmath>
using namespace std;
double PI = 3.14159; // This variable is defined globally, known to all functions in this program as PI
double cross_area(double r); // Function prototype for function cross_area
double side_area(double r, double h); // Function prototype for function Side_area
double total_area(double side_area, double cross_area);
int main(void)
{
    double h, r; //variables local to the main function
    cout << "Enter the radius and the height of the cylinder in Cm <Enter> ";
    cin >> r >> h;
    cout << endl;
    cout << "Before I do any computation or call any function, I want to let you know that \n";
    cout << "you have entered r = " << r << " and h = " << h << "." << endl;
    cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
    cout << "in the second one I will convert h \n";
    double crossArea = cross_area(r);
    cout << "The cross section area of the cylinder is " << crossArea << " inch-sqr" << endl;
    double sideArea = side_area(r,h);
    cout << "The side area of the cylinder is " << sideArea << " inch-sqr \n\n";
    cout << "The side area of the cylinder is " << sideArea << " inch-sqr \n\n";
    double totalArea = total_area(sideArea, crossArea);
    cout << "The total area of the cylinder is " << totalArea << " inch-sqr \n\n";
    return 0;
}
double cross_area(double r)
{
    //Cross section area includes the disks at the bottom and the top
    r = r * 0.3937; //converting r to inch
    return 2*PI*pow(r,2);
}
double side_area(double r, double h)
{
    double area; //variable local to Side_area function
    r = r * 0.3937; //converting r to inch
    h = h * 0.3937; //converting h to inch
    area = 2*PI*r*h;
    return area;
}

double total_area(double side_area, double cross_area)
{
    double total_area = side_area + cross_area;
    return total_area;
}