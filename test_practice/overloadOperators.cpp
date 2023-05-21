#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

class Money
{
public:
    friend Money operator+(const Money &amount1, const Money &amount2); // returns an object of type Money
    friend bool operator==(const Money &amount1, const Money &amount2); // returns a boolean

    Money(long dollars, int cents);
    Money(long dollars);
    Money();
    double getValue() const;
    void input(istream &ins);
    void output(ostream &outs) const;

private:
    long allCents;
};

// overload + operator, takes in two Money objects
Money operator +(const Money& amount1, const Money& amount2)
{
    Money temp;
    temp.allCents = amount1.allCents + amount2.allCents;
    return temp;
}

bool operator ==(const Money& amount1, const Money& amount2)
{
    return (amount1.allCents == amount2.allCents); // returns true or false
}

int main ()
{
    Money cost(1, 5), tax(0, 15), total;
    total = cost + tax;
}