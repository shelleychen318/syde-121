#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int len;
    double median;

    cout << "How many integers would you like in the array? ";
    cin >> len;

    int nums [len];

    for (int i = 0; i < len; i++)
    {
        cout << "Enter an interger: ";
        cin >> nums[i];
    } 

    sort(nums, nums + len);

    for (int i = 0; i < len; i++)
    {
        cout << nums[i];
    }

    // if length of arary is even
    if (len % 2 == 0)
    {
        int first = len / 2;
        int second = (len / 2) - 1;

        cout << first;
        cout << second;

        median = (nums[first] + nums[second]) / 2.0;
    }
    else
    {
        median = nums[len / 2];
    }

    cout << "The minimum value in the array is " << nums[0] << endl;
    cout << "The maximum value in the array is " << nums[len - 1] << endl;
    cout << "The median value in the array is " << median << endl;

}