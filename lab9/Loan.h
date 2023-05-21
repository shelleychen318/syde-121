// This part will go to Loan.h file
#ifndef Loan_H //1
#define Loan_H //2
#include "ID.h"


class Loan // Loan class definition
{
public:
    Loan();
    Loan(ID id, float amount, float rate, int term);
    void set();
    float payment();
    void display();

private:
    ID id;        // assume an unique integer in three integer parts
    float amount; // $ amount of the loan
    float rate;   // annual interest rate
    int term;     // number of months, length of the loan
};
#endif // 3
