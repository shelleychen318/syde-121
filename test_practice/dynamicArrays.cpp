#include <iostream>
using namespace std;

int main()
{
    int a[10];
    typedef int* IntPtr; // define pointer type name that points to ints
    IntPtr p = a; // create an int pointer and make it point to the array

    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " "; // can index the array using the int pointer
    }
    cout << endl;

}