#include <iostream>
using namespace std;

class Box
{
    double width; // private member variable

    public:
        friend void printWidth(Box box); // friend function takes in an object of this class as a parameter
        void setWidth(double width_in);
};

void printWidth(Box box)
{
    cout << "this is the width of this box: " << box.width << endl;
}

void Box::setWidth(double width_in)
{
    width = width_in;
}

int main()
{
    Box myBox;
    myBox.setWidth(19);
    printWidth(myBox);
}