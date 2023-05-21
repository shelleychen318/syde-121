#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int a = 1, b = 10;
    int random = (rand() % (b - a + 1)) + a;
    cout << random << endl;
}