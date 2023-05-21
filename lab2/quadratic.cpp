#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, discriminant, x1, x2;
    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;
    cout << "Enter a value for c: ";
    cin >> c;

    discriminant = ((pow(b, 2))-(4 * a * c)); // calculate the discriminant

    if (discriminant == 0) // only compute one root
    {
        x1 = (-b - discriminant) / 2 * a;
        cout << "x1 = " << x1 << endl;
    }
    else if (discriminant > 0) // compute both roots
    {
        x1 = (-b - discriminant) / 2 * a;
        x2 = (-b + discriminant) / 2 * a;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else
    {
        cout << "there are no real roots";
    }

}