#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

int main()
{
    Node *node1 = new Node();
    cout << node1->data << endl;
    cout << node1->next << endl; // printing the next node address
    return 0;
}
