#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2;

    p1 = new int; // points to an undefined int
    *p1 = 42; // new int has been initialized to 42, p1 points to this value
    p2 = p1; // p2 also points to 42
    cout << "*p1 == " << *p1 << endl; // prints out value (42)
    cout << "*p2 == " << *p2 << endl; 

    *p2 = 53; // changes value of variable to 53 (changes for p1 as well)
    cout << "*p1 == " << *p1 << endl; // prints out value (53)
    cout << "*p2 == " << *p2 << endl; 

    p1 = new int; // make pointer point to new undefined int
    *p1 = 88;
    cout << "*p1 == " << *p1 << endl; // prints out value (88)
    cout << "*p2 == " << *p2 << endl; // p2 still points to old value (53)
}