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

// &head --> yha pe hm refrence ish liye liye hai ki hm nhi chahte ki ishka koi copy bn jaye
// hm chahte hai ki hmare original linklist me hi change ho or khi pe n ho
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
