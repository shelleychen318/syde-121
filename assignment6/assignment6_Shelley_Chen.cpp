/*
Name: Shelley Chen
Student ID: 21002650
Date: November 11, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 6
Program Description: Program that uses a Book class to store information about a book.
*/
#include <iostream>
using namespace std;

class Book
{
public:

    string title, authors, date_of_publication; // member attributes

    // member function declarations
    Book(); // default constructor function
    Book(string intitle, string inauthors, string indate); // overload constructor functions
    Book(string intitle, string inauthors);
    Book(string intitle);

    void output(int book_num); // function for testing purposes
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

void Book::output (int book_num)
{
    cout << "\nInformation for book " << book_num << ":\n";
    cout << "Title: " << title << endl << "Authors: " << authors << endl << "Date of Publication: " << date_of_publication << endl;
}

int main()
{
    // declare instances of Book object
    Book book1; 
    Book book2("Harry Potter", "JK Rowling", "2018");
    Book book3("Harry Potter", "JK Rowling");
    Book book4("Harry Potter");

    book1.output(1);
    book2.output(2);
    book3.output(3);
    book4.output(4);
}