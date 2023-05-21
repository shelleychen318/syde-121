#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

typedef Node *NodePtr; // define pointer type that points to Nodes

// function to insert node at the head
// head node is passed by reference (eliminates need to make a copy of the node)
void headInsert(NodePtr &head, int data_in);

// function to traverse through linked list and return pointer to desired node
NodePtr search(NodePtr &head, int target);

void display_list(NodePtr &head);
void delete_node(NodePtr &head, int target);
void insert_after(NodePtr &head, int after_me, int new_value);

int main()
{
    NodePtr head;    // create a head pointer
    head = new Node; // make the head pointer point to a new Node object
    head->data = 3;  // value of member variable of the node that head points to

    headInsert(head, 5);
    cout << "head: " << (*head).data << endl; // prints 5
    cout << "head: " << head << endl;         // prints address

    headInsert(head, 9);
    headInsert(head, 8);

    NodePtr searchValue;
    searchValue = search(head, 9);
    cout << "searchValue: " << (*searchValue).data << endl; // prints 9
    display_list(head);

    delete_node(head, 9);
    display_list(head);
    insert_after(head, 8, 1);
    display_list(head);
}

void headInsert(NodePtr &head, int data_in)
{
    NodePtr tempPtr = new Node;
    tempPtr->data = data_in;

    tempPtr->link = head;
    head = tempPtr;
}

NodePtr search(NodePtr &head, int target)
{
    NodePtr here = head; // start at the head node

    if (here == NULL)
        return NULL; // if here points to empty list
    else
    {
        while (here->data != target && here->link != NULL)
            here = here->link; // move to the next node

        if (here->data == target)
            return here;
        else
            return NULL;
    }
}

void display_list(NodePtr &head)
{
    NodePtr temp = head;
    while (temp->link != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

void delete_node(NodePtr &head, int target)
{
    NodePtr temp = head, prev = NULL;

    // if the first item in the list is the target
    if (temp->data == target)
    {
        head = temp->link; // change head
        delete temp;
        return;
    }
    else
    {
        while (temp->data != target && temp != NULL)
        {
            prev = temp;
            temp = temp->link;
        }
        if (temp == NULL)
            return;
        
        prev->link = temp->link; // delete node
        delete temp;
    }
}

void insert_after(NodePtr &head, int after_me, int new_value)
{
    NodePtr here = head;
    if (here == NULL)
        return;
    else
    {
        while (here != NULL && here->data != after_me)
            here = here->link;
        if (here == NULL)
            return;
        else
        {
            NodePtr temp = new Node;
            temp->data = new_value;
            temp->link = here->link;
            here->link = temp;
        }
    }
}