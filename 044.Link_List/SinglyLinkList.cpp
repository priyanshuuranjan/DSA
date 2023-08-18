#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node *node1 = new Node();
    cout << node1->data << endl;
    cout << node1->next << endl; // printing the next node address
    return 0;
}
