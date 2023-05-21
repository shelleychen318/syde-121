#include <iostream>
using namespace std;

class Student
{
    public:
    string student_name;
    string student_idnumber;
};

typedef Student* StudentPtr; 

int main()
{
    int array_size;
    cout << "What is the student population? ";
    cin >> array_size;

    Student *a = new Student[array_size];

    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter the name for student " << (i + 1) << ": ";
        cin >> a[i].student_name;

        cout << "Enter the id for student " << (i + 1) << ": ";
        cin >> a[i].student_idnumber;
    }

    for (int i = 0; i < array_size; i++)
    {
        cout << "Name: " <<  a[i].student_name << endl;
        cout << "Student ID:" << a[i].student_idnumber << endl;
    }

    delete[] a;

}
