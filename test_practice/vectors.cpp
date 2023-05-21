#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    cout << "Enter an integer: ";
    int next; 
    cin >> next;

    // loop until user enters a non-positive number
    while (next > 0)
    {
        numbers.push_back(next);
        cin >> next;
    }

    // prints out values in vector
    for (unsigned int i = 0; i < numbers.size(); i ++)
    {
        cout << numbers[i] << " ";
    }
}