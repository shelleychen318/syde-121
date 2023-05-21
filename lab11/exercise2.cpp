//Program to demonstrate the function search.
#include <iostream>
#include <cstddef>
#include <string>

using namespace std;

struct Node
{
    string item;
    string ex_date;
    Node *link;
};

typedef Node* NodePtr;

NodePtr search(NodePtr head, string an_item);
// NodePtr search(NodePtr head, string an_item, bool is_date);
void head_insert(NodePtr& head, string an_item, string an_ex_date);
void show_list(NodePtr& head);

int main()
{
    NodePtr head = NULL;
    head_insert(head, "Tea", "1/1/2003");
    head_insert(head, "Jam", "9/12/2003");
    head_insert(head, "Rolls", "8/10/2001");

    cout << "List contains:" << endl;
    show_list(head);

    string target, choice;

    cout << "Do you want to search by item or date?";
    cin >> choice;

    if (choice == "item")
    {
        cout << "Enter an item to search for" << endl;
        cin >> target;
        NodePtr result = search(head, target);
        if (result == NULL)
        cout << target << " is not on the list." << endl;
        else
        cout << target << " is on the list." << endl;
    }
    else
    {   
        cout << "Enter an expiration date to search for" << endl;
        cin >> target;
        // NodePtr result = search(head, target, 1);
        // if (result == NULL)
        // cout << target << " is not on the list." << endl;
        // else
        // cout << target << " is on the list." << endl;

    }
        // cout << "Enter an item to search for" << endl;
        // cin >> target;
        // NodePtr result = search(head, target);
        // if (result == NULL)
        // cout << target << " is not on the list." << endl;
        // else
        // cout << target << " is on the list." << endl;

    return 0;
}

NodePtr search(NodePtr head, string target)
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
        // while you have still items and you haven't found the target yet
        while (here-> item != target && here->link != NULL)
            here = here->link;
        // Found the target, return the pointer at that location
        if (here-> item == target)
            return here;
        // Search unsuccessful, return Null
        else
            return NULL;
    }
}

// NodePtr search(NodePtr head, string target, bool is_date)
// {
//    // Point to the head node
//     NodePtr here = head;

//     // If the list is empty nothing to search
//     if (here == NULL)
//     {
//         return NULL;
//     }
//     // Search for the item
//     else
//     {
//         // while you have still items and you haven't found the target yet
//         while (here-> ex_date != target && here->link != NULL)
//             here = here->link;
//         // Found the target, return the pointer at that location
//         if (here-> ex_date == target)
//             return here;
//         // Search unsuccessful, return Null
//         else
//             return NULL;
//     }
// }

void head_insert(NodePtr& head, string an_item, int an_ex_date)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;

    temp_ptr -> item = an_item;
    temp_ptr -> ex_date = an_ex_date;

    temp_ptr->link = head;
    head = temp_ptr;
}

void show_list(NodePtr& head)
{
    NodePtr here = head;

    while (here != NULL)
    {
        cout << here -> item << endl;
        here = here ->link;
    }
}