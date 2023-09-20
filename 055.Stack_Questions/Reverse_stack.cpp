#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of a stack
void insertAtBottom(stack<int> &s, int item) {
    if (s.empty()) {
        s.push(item);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertAtBottom(s, item);
    s.push(topElement);
}

// Function to reverse a stack using recursion
void reverseStack(stack<int> &s) {
    if (s.empty()) {
        return;
    }

    int topElement = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, topElement);
}

int main() {
    stack<int> s;

    // Push some elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Original Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    // Push the elements back onto the stack after reversal
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Reverse the stack
    reverseStack(s);

    cout << "Reversed Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}
