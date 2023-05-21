// Lab8_2.cpp - This program uses a class for a loan, initializes it from the keyboard, then
// displays the class

#include <iostream>
#include <cmath>
using namespace std;

class Loan // loan class definition
{
public:
    int ID;       // assume an unique integer between 1111-9999
    float amount; // $ amount of the loan
    float rate;   // annual interest rate
    int term;     // number of months, length of the loan
    float monthly_payment;

    void display();
    void payment();
};

float add_loans(Loan loan1, Loan loan2);


int main()
{
    float p;
    Loan loan1, loan2;

    // Initialize the loan1 object
    cout << "Enter the ID of this loan \n";
    cin >> loan1.ID;

    cout << "Enter the amount of this loan \n";
    cin >> loan1.amount;

    cout << "Enter the annual interest rate of this loan (in %) \n";
    cin >> loan1.rate;

    cout << "Enter the term (number of months, length of the loan) \n";
    cin >> loan1.term;

    // Initialize the loan2 object
    cout << "Enter the ID of this loan \n";
    cin >> loan2.ID;

    cout << "Enter the amount of this loan \n";
    cin >> loan2.amount;

    cout << "Enter the annual interest rate of this loan (in %) \n";
    cin >> loan2.rate;

    cout << "Enter the term (number of months, length of the loan) \n";
    cin >> loan2.term;

    loan1.display();
    loan1.payment();

    loan2.display();
    loan2.payment();

    // compute total monthly payment
    p = add_loans(loan1, loan2);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "the monthly payment for loan 1 is $" << loan1.monthly_payment << endl;
    cout << "the monthly payment for loan 2 is $" << loan2.monthly_payment << endl;
    cout << "the total monthly payment is $" << p << endl;

    return 0;
}

void Loan::display()
{
    cout << "Loan information: " << endl
         << "ID: " << ID << endl
         << "Amount: " << amount << endl
         << "Rate: " << rate << endl
         << "Term: " << term << endl;
}

void Loan::payment()
{
    rate = rate / 1200; // To convert % yearly rate to monthly fraction
    monthly_payment = amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
}

float add_loans(Loan loan1, Loan loan2)
{
    return loan1.monthly_payment + loan2.monthly_payment;
}
