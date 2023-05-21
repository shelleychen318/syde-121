#include <iostream>
using namespace std;

class Loan
{
    int ID;       // assume an unique integer between 1111-9999
    float amount; // $ amount of the loan
    float payment();
    void initialize_loan();
};

void Loan::initialize_loan()
{
  // Initialize the loan1 structure
  cout << "Enter the ID of this loan: ";
  cin >> ID;

  cout << "Enter the amount of this loan: ";
  cin >> amount;
}
