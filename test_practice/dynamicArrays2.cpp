#include <iostream>
#include <cstdlib>
#include <cstddef>
using namespace std;

typedef int* IntArrayPtr;

void fill_array(int a[], int size);

int main()
{    
    int array_size;
    cout << "how many numbers in the array? ";
    cin >> array_size;

    IntArrayPtr p;
    // dynamic array points to array of size 'array_size'
    p = new int[array_size]; 
    fill_array(p, array_size);

    for(int i = 0; i < array_size; i++)
    {
        cout << p[i] << " ";
    }

    delete [] p; // delete pointer

    return 0;
}

void fill_array (int p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        p[i] = i;
    }
}

