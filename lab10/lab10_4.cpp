#include <iostream>
using namespace std;

class Student
{
public:
    char *name;
    long id_number;

    Student();
    void get_data();
    void display_data();
};

Student::Student()
{

}

void Student::get_data()
{
    // name = new char[name_in.length()];
    string name_in;

    cout << "Enter name: ";
    cin >> name_in;
    cout << "Enter student id: ";
    cin >> id_number;

    // pointer to char array
    char *name2 = new char[name_in.length()];

    // iterate through letters in name
    for (int i = 0; i < name_in.length(); i++)
    {
        name2[i] = name_in[i]; // add letters to cells of the array
    }
    name = name2; // make the member variable pointer point to this new name

    for (int i = 0; i < name_in.length(); i++)
    {
        cout << name[i];
    }
}

void Student::display_data()
{
    cout << "Name: ";
    int count = 0;
    while (name[count] != NULL)
    {
        cout << name[count];
        count++;
    }
    cout << "Student ID: " << id_number;
}

int main()
{
    Student myStudent;
    myStudent.get_data();
    myStudent.display_data();
}
