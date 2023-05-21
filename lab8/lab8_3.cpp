// Lab8_3.cpp - This program is a driver written to demonstrate how the constructor function works.
#include<iostream>
#include <cmath>
using namespace std;

class Loan  // Loan is called structure tag
{
    public:
         Loan( );
         Loan(int ID, float amount, float rate, int term);
         void set( );
         void payment( );
         void display( );
        float monthly_payment;

   private:
       int ID;  // assume an unique integer between 1111-9999
       float amount; // $ amount of the loan
      float rate; // annual interest rate
      int term;  // number of months, length of the loan

 };

 float add_loans(Loan loan1, Loan loan2, Loan loan3, Loan loan4);

int main( )
{
    Loan loan1(1234, 2300, 5.5, 48);  // initialize to values given
    Loan loan2;  // use the default values
    Loan loan3;
    Loan loan4 = loan1;

    cout << "Display loan1 \n";
    loan1.display();

    cout << "Display loan2 \n";
    loan2.display();

    cout << "Display loan4 \n";
    loan4.display();

    loan3.set( ); // set the values
    cout << "Display loan3 \n";
    loan3.display();

    loan1.payment();
    loan2.payment();
    loan3.payment();
    loan4.payment();

    float total = add_loans(loan1, loan2, loan3, loan4);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "this is the total monthly loan: $" << total << endl;

    return 0;
}

Loan::Loan( )
{
// Body intentionally kept empty so the default values are used.
// If you wish to set the default value of the members to specific
// values, here is the place to do it.
// For example, to make the default value of amount = 0
// you will use amount = 0;

// You could actually copy the body of set function here too

    ID = 1;
    amount = 0;
    rate = 1;
    term = 1;
}

Loan::Loan(int I, float am, float rt, int trm)
{
      ID = I;
      amount = am;
      rate = rt;
      term = trm;
}

void Loan::set( )
{
       // Initialize the loan1 object
      cout << "Enter the ID of this loan \n";
      cin >> ID;

      cout << "Enter the amount of this loan \n";
      cin >> amount;

      cout << "Enter the annual interest rate of this loan (in %) \n";
      cin >> rate;

      cout << "Enter the term (number of months, length of the loan) \n";
      cin >> term;
}

void Loan::display()
{
     cout << ID << endl;
     cout << amount << endl;
     cout << rate << endl;
     cout << term << endl;
}

void Loan::payment()
{
    rate = rate / 1200; // To convert % yearly rate to monthly fraction
    monthly_payment = amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
}

// must use call by reference 
float add_loans(Loan loan1, Loan loan2, Loan loan3, Loan loan4)
{
    return loan1.monthly_payment + loan2.monthly_payment + loan3.monthly_payment + loan4.monthly_payment;
}