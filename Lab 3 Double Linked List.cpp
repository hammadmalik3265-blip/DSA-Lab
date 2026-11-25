#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    // Create five nodes
    cout << "Enter 5 values: " << endl;

    for (int i = 1; i <= 5; i++)
    {
        Node* newNode = new Node;

        cin >> newNode->data;

        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Forward traversal
    Node* temp = head;
    int count = 0;

    cout << "\nForward Traversal: ";

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        count++;

        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Backward traversal
    temp = tail;

    cout << "Backward Traversal: ";

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";

        temp = temp->prev;
    }

    cout << "NULL" << endl;

    cout << "Total Nodes: " << count << endl;

    // Delete all nodes
    temp = head;

    while (temp != NULL)
    {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}
