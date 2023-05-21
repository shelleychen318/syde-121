// P3_1.cpp This program computes the total cost of purchases made,
//including 5% sales tax, on number_par items at a cost of price_par each.
#include <iostream>
using namespace std;
double total_purchase(int number_par, double price_par); // (1) Function declaration
bool warning(double subtotal);
int main( )
{
    double price, bill, budget = 1000;
    int number;
    cout << "Enter the number of items purchased: ";
    cin >> number;
    cout << "Enter the price per item $";
    cin >> price;
    bill = total_purchase(number, price); // (2) Function call
    // The following three lines are used for formatting purposes.  Since a precision of 2
    //  is set, then all numbers will be displayed with two decimal points.  We work with $
    //  this seems to be the most appropriate way to display the numbers..
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at "
         << "$" << price << " each.\n"
         << "Final bill, including tax, is $" << bill
         << endl;

    bool over_budget = warning(bill);
    if (over_budget == 0)
    {
        cout << "you are under budget" << endl;
    }
    else{
        cout << "you are over budget!!" << endl;
    }
    return 0;
}
// (3) Function definition
double total_purchase(int number_par, double price_par) // Function heading
{// Function body begins here
    const double TAX_RATE = 0.05; //5% sales tax, const is to make sure this value stays unchanged
    double subtotal;
    subtotal = price_par * number_par;
    return (subtotal + subtotal*TAX_RATE);
}// Function body ends here

bool warning(double subtotal) // Function heading
{// Function body begins here
    int remaining = 1000 - subtotal;
    // under budget
    if (remaining > 10)
    {
        return 0;
    }
    else // over budget
    {
        return 1;
    }
    // return (subtotal + subtotal*TAX_RATE);
}