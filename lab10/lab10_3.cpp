#include <iostream>
using namespace std;

class StringVar
{
public:
    int length;
    char *Chars;

    // void operator=(const StringVar &right_side);
    StringVar(string string_in, int length_in);
    void swap(const StringVar &right_side);
};

StringVar::StringVar(string string_in, int length_in)
{

}


int main ()
{
    // StringVar *string1, *string2;

    string string_in1, string_in2;

    cout << "Enter string 1: ";
    cin >> string_in1;
    cout << "Enter string 2: ";
    cin >> string_in2;

    // (*string1).Chars = string_in1;

    
}

// void StringVar::operator=(const StringVar &right_side)
// {
//     Chars = right_side.Chars;
//     number_used = right_side.number_used;
//     a = right_side.a;


//     int new_length = strlen(right_side.Chars);
//     if (new_length > max_length)
//     {
//     delete [] value;
//     max_length = new_length;
//     value = new char[max_length + 1];
//     }
//     for (int i = 0; i < new_length; i++ )
//     {
//     value[i] = right_side.value[i];
//     value[new_length]='\0';
//     }

// }
