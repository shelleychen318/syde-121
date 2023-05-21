#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string name;
    Node *link;
};

typedef Node* NodePtr;

int main ()
{
    NodePtr headPtr, tempPtr;

    headPtr = new Node;
    headPtr->name = "Shelley";

    tempPtr = new Node;
    tempPtr->name = "Kevin";
    headPtr->link = tempPtr;

    tempPtr->link = new Node;
    tempPtr = tempPtr->link;
    tempPtr->name = "Carson";
    tempPtr->link = NULL;

    NodePtr here = headPtr;
    cout << here->name << endl;
    while (here->link != NULL)
    {
        here = here->link;
        cout << here->name << endl;
    }

    here = headPtr;
    while (here->name != "Kevin")
        here = here->link;

    tempPtr = new Node;
    tempPtr->link = here->link;
    here->link = tempPtr;
    tempPtr->name = "Sonia";

    here = headPtr;
    cout << endl;
    cout << here->name << endl;
    while (here->link != NULL)
    {
        here = here->link;
        cout << here->name << endl;
    }

    here = headPtr;
    NodePtr prev = NULL;
    while (here->name != "Carson")
    {
        prev = here;
        here = here->link;
    }
    prev->link = here->link;

    here = headPtr;
    cout << endl;
    cout << here->name << endl;
    while (here->link != NULL)
    {
        here = here->link;
        cout << here->name << endl;
    }
}