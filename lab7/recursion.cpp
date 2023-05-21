#include <iostream>
using namespace std;
int factorial(int n);

int main()
{   
    int n, result;
    cout << "what number would you like the factorial of? ";
    cin >> n;
    result = factorial(n);
    cout << "the factorial of " << n << " is " << result << endl;
}

int factorial(int n)
{
    int result;
    if (n == 1 || n == 0) // base case
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1); // recursive case
    }
    return result;
}