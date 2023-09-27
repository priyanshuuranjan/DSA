#include <iostream>
#include <stack>
using namespace std;

// Function to delete the middle element of a stack
void deleteMiddleElement(stack<int> &s, int curr, int mid)
{
    // Base case: If we have reached the middle element, pop it
    if (curr == mid)
    {
        s.pop();
        return;
    }

    // Pop the top element and store it
    int temp = s.top();
    s.pop();

    // Recursively delete the middle element
    deleteMiddleElement(s, curr + 1, mid);

    // Push the temporarily removed element back
    s.push(temp);
}

int main()
{
    stack<int> s;

    // Push elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Calculate the middle index
    int mid = s.size() / 2;

    // Delete the middle element
    deleteMiddleElement(s, 0, mid);

    // Print the remaining elements in the stack..
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
