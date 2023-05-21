//  This program reads one character from the keyboard and will
// convert it to uppercase, if it is lowercase
// convert it to lowercase, if it is uppercase
// display a message, if it is a digit

#include<iostream>
#include<cctype>
using namespace std;

int main( )
{
    char c;

    cout << "Enter a character \n";
    cin.get(c);

    if(isalpha(c))
    { //check to see if it is a letter of alphabet
        if( isupper(c) ) //check to see if it is uppercase
        {
            c = tolower(c);
            cout << "Your character " << c << " is in uppercase.";
            cout << "Its lowercase case is " << c << endl;
        }
        if ( islower(c))
       {
            c = toupper(c);
            cout << "Your character " << c << " is in lowercase.";
            cout << "Its uppercase is " << c << endl;
        }
     }
     else if (isdigit(c))
    {
        cout << "Your character " << c << " is a digit.\n";
    }
     else if (isspace(c))
    {      
        cout << "Your character " << c << " is a whitespace.\n";
    }
     return 0;
}
