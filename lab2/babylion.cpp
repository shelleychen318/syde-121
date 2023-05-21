#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, r, guess, prevGuess = n, guessDiff;
    bool play = true;

    cout << "Enter a non-zero integer: ";
    cin >> n;
    guess = n / 2;

    while (play)
    {
        r = n / guess;
        guess = (guess + r) / 2;
        guessDiff = (guess - prevGuess) / prevGuess;
        prevGuess = guess;
        if (guessDiff < 0.01)
        {
            play = false;
        }
        cout << guess << endl;
    }
    cout << guess << endl;
}