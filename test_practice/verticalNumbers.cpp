#include <iostream>
using namespace std;

void writeVertical(int num);

int main ()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    writeVertical(num);
}

void writeVertical(int num)
{
    if (num < 10)
    {
        cout << num << endl;
    }
    else
    {
        writeVertical(num / 10);
        cout << (num % 10) << endl;
    }
}