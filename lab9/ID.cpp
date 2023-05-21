
#include <iostream>
#include "ID.h"
using namespace std;

ID::ID()
{
}
ID::ID(int l, int m, int r)
{
    left = l;
    middle = m;
    right = r;
}
void ID::display()
{
    cout << right << "-" << middle << "-" << right << endl;
}