#include <iostream>
using namespace std;

class Book
{
public:
    Book(); // default constructor declaration
    void output();

    // overload constructor function declarations
    Book(string intitle, string inauthors, string indate);
    Book(string intitle, string inauthors);
    Book(string intitle);

    string title, authors, date_of_publication; // member attributes
};

// default constructor definition
Book::Book()
{
    title = "n/a";
    authors = "n/a";
    date_of_publication = "n/a";
}

// constructor function with all three attributes inputted
Book::Book(string intitle, string inauthors, string indate)
{
    title = intitle;
    authors = inauthors;
    date_of_publication = indate;
}

// constructor function with title and authors inputted
Book::Book(string intitle, string inauthors)
{
    title = intitle;
    authors = inauthors;
    date_of_publication = "n/a";
}

// constructor function with only title inputted
Book::Book(string intitle)
{
    title = intitle;
    authors = "n/a";
    date_of_publication = "n/a";
}

void Book::output ()
{
    cout << "Title: " << title << endl << "Authors: " << authors << endl << "Date of Publication: " << date_of_publication << endl;
}

int main()
{
    Book book1; // declare instance of Book object
    Book book2("Harry Potter", "JK Rowling", "2018");
    Book book3("Harry Potter", "JK Rowling");
    Book book4("Harry Potter");

    book1.output();
    book2.output();
    book3.output();
    book4.output();
}