// Program to demonstrate the function insert.
// It asks users to input an item and the count and will ask
// them where they want to insert the new node. If the request
// is valid, the new node will be inserted.

#include <iostream>
#include <cstddef>
#include <string>
using namespace std;

struct Node
{
    string item;
    int count;
    Node *link;
};

typedef Node *NodePtr;

void delete_node(NodePtr &head, string an_item);
void insert(NodePtr after_me, string an_item, int a_number);
void head_insert(NodePtr &head, string an_item, int a_number);
void show_list(NodePtr &head);
NodePtr search(NodePtr head, string target);

int main()
{
    string new_item, target;
    int new_count;
    NodePtr head = NULL;
    head_insert(head, "Tea", 2);
    head_insert(head, "Jam", 3);
    head_insert(head, "Rolls", 10);

    cout << "List contains:" << endl;
    show_list(head);

    cout << "Enter the item you wish to delete (string) \n";
    cin >> new_item;

    delete_node(head, new_item);
    cout << "List contains:" << endl;
    show_list(head);

    // NodePtr after_me = head;
    // after_me = after_me ->link;

    // cout << "Enter the item you wish to insert (string) \n";
    // cin >> new_item;
    // cout << "Enter the count of new item \n";
    // cin >> new_count;

    // cout << "Enter the item after which you want \n";
    // cout << "to insert the new node \n";
    // cin >> target;
    // after_me = search(head, target);

    // if(after_me != NULL)
    // {
    //       cout << "\nWill insert " <<  new_item << " with count" << endl
    //               << new_count << " after the node with "
    //               << (after_me -> item) << endl << endl;

    //       insert(after_me, new_item, new_count);

    //       cout << "List now contains:" << endl;
    //       show_list(head);
    //  }
    //  else
    //  {
    //       cout << "I can't find " << target
    //               << " in the list, so I can't insert anything \n";
    //  }

    return 0;
}

void delete_node(NodePtr &head, string an_item)
{
    NodePtr temp_ptr = head, prev_ptr = NULL;

//     if (temp_ptr != NULL && temp_ptr->item == an_item)
//     {
//         head = temp_ptr->link; // Changed head
//         delete temp_ptr;       // free old head
//         return;
//     }
//     else
//     {
//         while (temp_ptr != NULL && temp_ptr->item != an_item)
//         {
//             prev_ptr = temp_ptr;
//             temp_ptr = temp_ptr->link;
//         }

//         // If key was not present in linked list
//         if (temp_ptr == NULL)
//             return;

//         // Unlink the node from linked list
//         prev_ptr->link = temp_ptr->link;

//         // Free memory
//         delete temp_ptr;
//     }
// }

// as long as we haven't reached the end of the list
while (temp_ptr != NULL)
{
    // if temp is pointing to the node with target item
    if (temp_ptr != NULL && temp_ptr->item == an_item)
    {
        // if you want to delete the head node (aka the prev pointer will still be null)
        if (prev_ptr == NULL)
        {
            prev_ptr = temp_ptr; // reassign prev pointer so that it is not null
            head = temp_ptr->link; // update head to point to the node below the target
        }
        prev_ptr->link = temp_ptr->link; // connect prev node with the node after the deleted one (bypass deleted node)
        delete temp_ptr; // delete the node
        return;

    }
    // moving the pointers down the list
    prev_ptr = temp_ptr;
    temp_ptr = temp_ptr->link;
}

}

// Uses cstddef:
void insert(NodePtr after_me, string an_item, int a_number)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;

    temp_ptr->item = an_item;
    temp_ptr->count = a_number;

    temp_ptr->link = after_me->link;
    after_me->link = temp_ptr;
}

// Uses cstddef:
void head_insert(NodePtr &head, string an_item, int a_number)
{
    NodePtr temp_ptr;
    temp_ptr = new Node;

    temp_ptr->item = an_item;
    temp_ptr->count = a_number;

    temp_ptr->link = head;
    head = temp_ptr;
}

// Uses iostream and cstddef:
void show_list(NodePtr &head)
{
    NodePtr here = head;

    while (here != NULL)
    {
        cout << here->item << "\t";
        cout << here->count << endl;
        here = here->link;
    }
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
