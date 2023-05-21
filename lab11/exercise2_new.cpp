// Program to demonstrate the function search.
#include <iostream>
#include <cstddef>
#include <string>

using namespace std;

struct Node
{
    string item;
    string date;
    Node *link;
};

typedef Node *NodePtr;

NodePtr search(NodePtr &head, string an_item, bool is_date);
void head_insert(NodePtr &head, string an_item, string a_date);
void show_list(NodePtr &head);

int main()
{
    NodePtr head = NULL;
    head_insert(head, "Tea", "2");
    head_insert(head, "Jam", "3");
    head_insert(head, "Rolls", "10");

    cout << "List contains:" << endl;
    show_list(head);

    string choice, target;
    NodePtr result;
    cout << "do you want to search by item or date?";
    cin >> choice;

    if (choice == "date")
    {
        cout << "Enter a date to search for" << endl;
        cin >> target;
        result = search(head, target, 1);
    }
    else
    {
        cout << "Enter an item to search for" << endl;
        cin >> target;
        result = search(head, target, 0);
    }

    if (result == NULL)
        cout << target << " is not on the list." << endl;
    else
        cout << target << " is on the list." << endl;

    return 0;
}

NodePtr search(NodePtr &head, string target, bool is_date)
{
    // Point to the head node
    NodePtr here = head;

    // If the list is empty nothing to search
    if (here == NULL)
    {
        return NULL;
    }
    // Search for the item
    else
    {
        if (is_date)
        {
            // while you have still items and you haven't found the target yet
            while (here->date != target && here->link != NULL)
                here = here->link;
            // Found the target, return the pointer at that location
            if (here->date == target)
                return here;
            // Search unsuccessful, return Null
            else
                return NULL;
        }
        else
        {
            // while you have still items and you haven't found the target yet
            while (here->item != target && here->link != NULL)
                here = here->link;
            // Found the target, return the pointer at that location
            if (here->item == target)
                return here;
            // Search unsuccessful, return Null
            else
                return NULL;
        }
    }
}

void head_insert(NodePtr &head, string an_item, string a_date)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;

    temp_ptr->item = an_item;
    temp_ptr->date = a_date;

    temp_ptr->link = head;
    head = temp_ptr;
}

void show_list(NodePtr &head)
{
    NodePtr here = head;

    while (here != NULL)
    {
        cout << here->item << endl;
        here = here->link;
    }
}
