#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nums[] = {4, 4, 4, 4, 4, 4, 4, 4};
    int length = sizeof(nums) / sizeof(nums[0]);
    int sum;

    cout << " x      x^2     Current Sum\n===     ===    ==========\n";
    for (int i = 0; i < length; i++)
    {
        sum += nums[i];
        cout << " " << nums[i] << "      " << (pow(nums[i], 2)) << "      " << sum << endl;
    }
}