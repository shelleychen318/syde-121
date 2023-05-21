#include <iostream>
using namespace std;

class Person 
{
    string first_name, last_name, date_of_birth;

    public:
    Person() {} // empty constructor
    Person (string new_fname, string new_lname, string new_dob) :
        first_name(new_fname),
        last_name(new_lname),
        date_of_birth(new_dob) {}
    void print();
};

// student is inherited from Person
class Student: public Person
{
    string student_ID, faculty, major;

    public:
    Student() {}

    // pass in Person parameter to evoke Person constructor
    Student(string new_ID, string new_faculty, string new_major, Person new_person) :
    Person(new_person), student_ID(new_ID), faculty(new_faculty), major(new_major) {}
    void print();
};

void Person::print()
{
    cout << first_name << endl;
    cout << last_name << endl;
    cout << date_of_birth << endl;
}

void Student::print()
{
    Person::print(); // calls Person::print()
    cout << student_ID << endl;
    cout << faculty << endl;
    cout << major << endl;
}

int main ()
{
    Person p1("Kevin", "Yang", "September 14, 2004");
    // p1.print();
    Student s1("657697", "Arts", "Rotman Commerce", p1);
    // s1.print();
    s1.Person::print();
}