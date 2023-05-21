/* Name: Shelley Chen 

*/


#include <iostream>
using namespace std;
int main()
{
    string leave, check_light;
    bool light_on;
    cout << "do you want to leave the room? ";
    cin >> leave;
    if (leave == "yes")
    {
        cout << "is the light on? ";
        cin >> check_light;
        if (check_light == "yes")
        {
            cout << "please turn off the light before leaving the room!\n";
            // cout << "enter 0 to turn off the light";
            // light_on = true;
        }
        if (check_light == "no")
        {
            cout << "good job! you may leave the room now!\n";
        }
    }
}