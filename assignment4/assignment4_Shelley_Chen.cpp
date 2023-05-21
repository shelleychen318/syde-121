/*
Name: Shelley Chen
Student ID: 21002650
Date: October 18, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 4
Program Description: Program that draws shapes specified to user input.
*/

#include <iostream>
using namespace std;

// function declarations
void instructions();
int menu();
void draw_shape(int choice);
int get_size();
char get_char();
void draw_triangle(int size, char c);
void draw_diamond(int size, char c);
void draw_bottom(int size, char c, int shape);
void draw_side_triangle(int size, char c);

int main()
{
    int choice;
    instructions();
    choice = menu();

    // if user selects 5, exit the program
    if (choice == 5)
    {
        cout << "You requested to quit, bye \n";
        return 0;
    }
    draw_shape(choice);
    return 0;
}

// this function describes the program and how it works
void instructions()
{
    cout << "This program will prompt you to select a shape to draw.\n";
    cout << "Then, you will be asked to enter a size and symbol for the shape.\n";
    cout << "The program will draw the selected shape with the specified size and symbol.\n";
}

// this function will return a choice to the main ; 1) draw triangle, 2) draw diamond, and 3) quit
int menu()
{
    int choice;
    cout << "\nWhat shape would you like to draw?\n";
    cout << "1) triangle\n2) diamond\n3) upside down triangle\n4) side-way triangle\n5) quit\nEnter your choice: ";
    cin >> choice;

    // forces user to enter a valid choice from the menu
    while (choice < 1 || choice > 5)
    {
        cout << "\n1) triangle\n2) diamond\n3) upside down triangle\n4) side-way triangle\n5) quit\nPlease enter a valid choice (1-5): ";
        cin >> choice;
    }
    return choice;
}

// this function calls on appropriate function depending on the choice to draw a shape
void draw_shape(int choice)
{
    // get input
    int size = get_size();
    char c = get_char();

    // call the appropriate draw function based on user shape selection
    if (choice == 1)
    {
        draw_triangle(size, c);
    }
    else if (choice == 2)
    {
        draw_diamond(size, c);
    }
    else if (choice == 3)
    {
        draw_bottom(size, c, 2);
    }
    else
    {
        draw_side_triangle(size, c);
    }
}

// this function will return the size of the shape entered by the user
int get_size()
{
    int input;
    cout << "Enter a size for the shape: ";
    cin >> input;
    return input;
}

// this function will return the character for the shape entered by the user
char get_char()
{
    char input;
    cout << "Enter a character used to draw the shape: ";
    cin >> input;
    return input;
}

// this function draws a triangle based on user's size and character specifications
void draw_triangle(int size, char c)
{
    for (int i = 1, k = 0; i <= size; ++i, k = 0)
    {
        for (int space = 1; space <= size - i; ++space)
        {
            cout << "  ";
        }
        while (k != 2 * i - 1)
        {
            cout << c << " ";
            ++k;
        }
        cout << endl;
    }
}

// this function draws a diamond based on user's size and character specifications
void draw_diamond(int size, char c)
{
    draw_triangle(size, c);
    draw_bottom(size, c, 1);
}

// this function draws the bottom of the diamond or an upside down triangle based on user's size and character specifications
// 'shape' is a paramenter that controls the value of 'row' depending on whether user selects diamond or upside down triangle
void draw_bottom(int size, char c, int shape)
{
    int row;

    // set max row number to be one less than size if user selects diamond (draws bottom of diamond)
    if (shape == 1)
        row = size - 1;
    else
        row = size;

    for (int i = row; i >= 1; --i)
    {
        for (int space = 0; space < size - i; ++space)
            cout << "  ";

        for (int j = i; j <= 2 * i - 1; ++j)
            cout << c << " ";

        for (int j = 0; j < i - 1; ++j)
            cout << c << " ";

        cout << endl;
    }
    return;
}

// this function draws a side-ways triangle based on user's size and character specifications
void draw_side_triangle(int size, char c)
{
    // draws the top part of triangle
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    // draws the bottom part of triangle
    for (int i = 2; i <= size; i++)
    {
        for (int j = size; j >= i; j--)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return;
}