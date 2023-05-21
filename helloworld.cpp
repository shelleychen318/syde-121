#include <iostream>
using namespace std;

class Person
{
    string first_name;
    string last_name;
    string date_of_birth;

public:
    Person();
    Person(string firstname_in, string lastname_in, string date_in);
};

Person::Person()
{
}

Person::Person(string firstname_in, string lastname_in, string date_in)
{
    first_name = firstname_in;
    last_name = lastname_in;
    date_of_birth = date_in;
}

int main()
{
    Person p("Shelley", "Chen", "March 18, 2004");
}