#include<iostream>
using namespace std;

void get_a_b_c(double& a, double& b, double& c, double& result);
double bb_4ac(double& a, double& b, double& c);


int main()
{
    double a, b, c, result;
    get_a_b_c(a, b, c, result);
    cout << result << endl;
}

void get_a_b_c(double& a, double& b, double& c, double& result)
{
    cout << "Please enter three values for a, b, and c separated by a single space, then press <Enter>: ";    cin >> a >> b >> c;
    cout << endl;
    result = bb_4ac(a, b, c);
    return; // void function, returns nothing
}

double bb_4ac(double& a, double& b, double& c)
{ 
    return b*b - 4*a*c;
}
