#include <iostream>
#include <stack>

using namespace std;

// Function to insert an element at the correct position in a sorted stack
void insertSorted(stack<int>& s, int element) {
    if (s.empty() || element > s.top()) {
        s.push(element);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertSorted(s, element);
    s.push(topElement);
}

// Function to sort a stack using recursion
void sortStack(stack<int>& s) {
    if (!s.empty()) {
        int topElement = s.top();
        s.pop();
        sortStack(s);
        insertSorted(s, topElement);
    }
}

int main() {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(5);
    myStack.push(2);
    myStack.push(9);
    myStack.push(1);
    myStack.push(6);

    cout << "Original Stack: ";
    stack<int> tempStack = myStack;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Sort the stack using recursion
    sortStack(myStack);

    cout << "Sorted Stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}

// best approach 
/*
void sortedInsert(stack<int> &stack, int num) {
    //base case
    if(stack.empty() || (!stack.empty() && stack.top() < num) ) {
        stack.push(num);
        return;
    }
    
    int n = stack.top();
    stack.pop();
    
    //recusrive call
    sortedInsert(stack, num);
    
    stack.push(n);
}

void sortStack(stack<int> &stack)
{
		//base case
    	if(stack.empty()) {
            return ;
        }
    
    	int num = stack.top();
    	stack.pop();
    
    	//recursive call
    	sortStack(stack);
    
    	sortedInsert(stack, num);
}
*/