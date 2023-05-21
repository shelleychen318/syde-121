// Lab8_1.cpp - This program creates uses a structure for loan, initialize it from the keyboard, then
// displays the struct

#include <iostream>
#include <cmath>
using namespace std;

struct Loan // Loan is called structure tag
{
  int ID;       // assume an unique integer between 1111-9999
  float amount; // $ amount of the loan
  float rate;   // annual interest rate
  int term;     // number of months, length of the loan
};

float payment(Loan &l);
void initialize_loan(Loan &l);

int main()
{
  Loan loan1, loan2;
  float monthly_payment1, monthly_payment2;

  initialize_loan(loan1);
  initialize_loan(loan2);

  monthly_payment1 = payment(loan1);
  monthly_payment2 = payment(loan2);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "The monthly payment for loan " << loan1.ID << " is: $" << monthly_payment1 << endl;
  cout << "The monthly payment for loan " << loan2.ID << " is: $" << monthly_payment2 << endl;

  cout << "The total payment for the 2 loans is: $" << (monthly_payment1 + monthly_payment2) << endl;

  return 0;
}

void initialize_loan(Loan &l)
{
  // Initialize the loan1 structure
  cout << "Enter the ID of this loan: ";
  cin >> l.ID;

  cout << "Enter the amount of this loan: ";
  cin >> l.amount;

  cout << "Enter the annual interest rate of this loan (in %): ";
  cin >> l.rate;

  cout << "Enter the term (number of months, length of the loan): ";
  cin >> l.term;
}

float payment(Loan &l)
{
  // use member attributes from Loan structure
  l.rate = l.rate / 1200; // To convert % yearly rate to monthly fraction

  return l.amount * l.rate * (pow((l.rate + 1), l.term) / (pow((l.rate + 1), l.term) - 1));
}
