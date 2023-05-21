// Program to demonstrate the function head_insert.
#include <iostream>
#include <cstddef>
#include <string>
using namespace std;

struct Node
{
    string item;
    int day;
    int month;
    int year;
    Node *link;
};

typedef Node *NodePtr;

void head_insert(NodePtr &head, string an_item, int a_day, int a_month, int a_year);
void show_list(NodePtr &head);

int main()
{
    NodePtr head = NULL;
    head_insert(head, "Tea", 1, 1, 2003);
    head_insert(head, "Jam", 9, 12, 2003);
    head_insert(head, "Rolls", 8, 10, 2001);

    show_list(head);

    return 0;
}

void head_insert(NodePtr &head, string an_item, int a_day, int a_month, int a_year)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;

    temp_ptr->item = an_item;
    temp_ptr->day = a_day;
    temp_ptr->month = a_month;
    temp_ptr->year = a_year;

    temp_ptr->link = head;
    head = temp_ptr;
}

void show_list(NodePtr &head)
{
    NodePtr here = head;

    while (here != NULL)
    {
        cout << here->item << "\t";
        cout << here->day << "/" << here->month << "/" << here->year << endl;

        here = here->link;
    }
}
