#include <iostream>
using namespace std;

void fillUp(int a[], int size);

int main()
{
    int score[5], max;

    cout << "Enter 5 scores: ";
    cin >> score[0];
    max = score[0];

    for (int i =0; i < 4; i++)
    {
        cin >> score[i];
        if (score[i] > max)
        {
            max = score[i];
        }
    }

    int score2[5];
    fillUp(score2, 5);
    
}

void fillUp(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}

void fillUp(const int a[], int size)
{
    
}