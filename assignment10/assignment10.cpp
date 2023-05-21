/*
Name: Shelley Chen
Student ID: 21002650
Date: December 2, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 10
Program Description: Program that asks the user for a word and prints it backwords.
*/

#include <iostream>
#include <cstddef>
using namespace std;

// nodes that make up the stack
struct StackFrame
{
    char data;
    StackFrame *link;
};

typedef StackFrame *StackFramePtr;

// class that maintains the stack
class Stack
{
public:
    Stack();
    void push(char letter);
    char pop();
    bool empty() const;

private:
    StackFramePtr top;
};

// construtor to make first StackNode point to nothing
Stack::Stack() : top(NULL)
{
}

// checks if stack is empty
bool Stack::empty() const
{
    return (top == NULL);
}

// pushes new nodes to the existing stack
void Stack::push(char letter)
{
    // create a temp pointer that points to the new node
    StackFramePtr temp_ptr;
    temp_ptr = new StackFrame;
    temp_ptr->data = letter;

    temp_ptr->link = top; // make new node point to top
    top = temp_ptr; 
}

char Stack::pop()
{
    if (empty())
    {
        cout << "Error: popping an empty stack\n";
        exit(1);
    }
    char result = top->data; // first node to be popped is the top node

    // create temp pointer that points to the top node, make top node point to null
    StackFramePtr temp_ptr = top;
    top = top->link;

    delete temp_ptr;

    return result;
}

int main()
{
    Stack s;
    char next, ans;

    do
    {
        cout << "Enter a word: ";
        cin.get(next);
        while (next != '\n')
        {
            s.push(next);
            cin.get(next);
        }

        cout << "Written backwards that is: ";
        while (!s.empty())
        {
            cout << s.pop();
        }
        cout << endl;

        cout << "Again? (y/n) ";
        cin >> ans;

        cin.ignore(10000, '\n');
    } while (ans != 'n' && ans != 'N');

    return 0;
}