#include <iostream>
using namespace std;

struct Person
{
    string first_name, last_name, date_of_birth; 
};


int main ()
{
    Person p;
    p.first_name = "Kevin";
    p.last_name = "Yang";
    p.date_of_birth = "September 14, 2004";
}