// This program will ask for some values and display their average

#include<iostream>
#include<vector>
using namespace std;

int main( )
{
     vector<int> v(4);
     char ans = 'y';
     float sum = 0;
     int count = 0;

     while(ans == 'y' || ans == 'Y')
     {
             cout << "Enter an integer \n";
             cin >> v[count];
             sum += v[count];
             count++;

             cout << "Do you wish to enter a new number y/n \n";
             cin >> ans;
      }

      if(count > 0)
      {
          cout << "Average of " << count  << " numbers is " << sum/count << endl;
      }

     return 0;
}
