#include <iostream>
using namespace std;

int main()
{
    int n, fib1 = 0, fib2 = 1, fib_n = 0;
    cout << "Enter a number for the Fibonacci sequence: ";
    cin >> n;

    for (int i = 0; i < n - 2; i++)
    {
        fib_n = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_n;
    }
    if (n == 2)
    {
        fib_n = fib1 + fib2;
    }

    cout << "The " << n << " number in the Fibonacci sequence is " << fib_n;

    return 0;
}