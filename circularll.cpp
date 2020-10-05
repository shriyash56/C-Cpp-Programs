#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *last = NULL;

void insertNode()
{
    int data;
    Node *temp = new Node();
    cout << "Enter data : ";
    cin >> data;
    temp->data = data;

    if (last == NULL)
    {
        last = temp;
        last->next = last;
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void displayList()
{
    if (last != NULL)
    {

        Node *temp = last->next;
        Node *first = temp;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != first);
    }
}

int main()
{
    int i, n;
    cout << "How many elements you want to enter : ";
    cin >> n;

    for (i = 0; i < n; i++)
        insertNode();

    displayList();
}