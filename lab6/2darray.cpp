// This program will ask a runner for her/his fastest 5 times for 6
// different distances and will display them using a 2-D array.

#include<iostream>
using namespace std;

int find_distance(int j);   //a function that returns a distance based on the choice j

int main( )
{
   int i =0;
   int distance[6];
   double data[6][5];  //This array will keep 30 values in 6 rows and 5 columns

    // 6 events and 5 times for each one of the events
   for(int j = 0; j < 6; j++)
   {
        distance[j] = find_distance(j); // getting the index for the distance
       cout << "\nEnter 5 of your best running times for \n " <<  distance[j] << " m \n";
       for(i = 0;  i < 5; i++)
      {
         cout << "Enter a time \n";
         cin >> data[j][i]; // get 5 times for each distance
      }

   }

   cout << "Here is your distances: ";
   for(int j = 0;  j < 6; j++)
   {
         cout << "\nDistance : " << distance[j] << " m \n";
         for(i = 0; i < 5; i++)
         {

          cout << data[j][i] << "\t";
         }
         cout << endl;
   }

   for (int j = 0; j < 6; j++)
   {
        sort (data[j], data[j] + 5);
        for (int i = 0; i < 5; i++)
        {
            cout << data[j][i];
        }
        cout << endl;
    }   

    // FIND MIN, MAX, AVERAGE FOR EACH ROW


   return 0;

}

int find_distance(int j)
{
       switch (j)
       {
                case 0: // 100 meter
                     return 100;
                break;
               case 1: // 150 meter
                     return 150;
                break;
               case 2: // 200 meter
                     return 200;
                break;
               case 3: // 400 meter
                     return 400;
                break;
               case 4: // 800 meter
                     return 800;
                break;
               default: // 1600 meter
                     return 1600;
    }
}
