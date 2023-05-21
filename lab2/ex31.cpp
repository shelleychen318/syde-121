#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, result;
    while (true)
    {
        cout << "Enter base integer: ";
        cin >> x;
        cout << "Enter exponent: ";
        cin >> y;
        result = pow(x,y);
        cout << result << endl;
    }
}