#include <iostream>
#include <cstdlib>
using namespace std;
class PartFilledArray
{
public:
    PartFilledArray(int array_size);
    PartFilledArray(const PartFilledArray &object);
    ~PartFilledArray();
    void operator = (const PartFilledArray &right_side);
    void add_value(double new_entry);
    void print ();
    // other members functions

    double *a;
    int max_number;
    int number_used;
};

PartFilledArray::PartFilledArray(int array_size) : max_number(array_size), number_used(0)
{
    a = new double[max_number];
}

PartFilledArray::~PartFilledArray()
{
    cout << "deconstructing";
}

PartFilledArray::PartFilledArray(const PartFilledArray &object)
{
    max_number= object.max_number;
    number_used = 0;
    a = new double[max_number];
}

void PartFilledArray::add_value(double new_entry)
{
    a[number_used] = new_entry;
    number_used++;
}

void PartFilledArray::operator = (const PartFilledArray &right_side)
{
    max_number = right_side.max_number;
    number_used = right_side.number_used;
    a = right_side.a;
}

void PartFilledArray::print ()
{
    for (int i = 0; i < max_number; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    PartFilledArray s(5);
    s.add_value(20);
    PartFilledArray t(5);
    t = s;
    t.print();
}

