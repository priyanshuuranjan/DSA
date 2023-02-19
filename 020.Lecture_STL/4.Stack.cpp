// stack means jo operation 1st me hua oo last me use hoga
// or jo last me hua oo 1st me hoga
// simple shadi wala example plate wala
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Priyanshu");
    s.push("Singh");
    s.push("Alpha");

    cout << "Top Element is " << s.top() << endl; // this print Alpha
                                                  // yha pe hm last element ko hta  rhe hai

    // pop me jo phle jata hai oo nikalta hai
    s.pop();
    cout << "Top Element is " << s.top() << endl; // this print Singh

    // printing the size of stack elements

    cout << "Size of stack elements is " << s.size() << endl;

    // checking emmpty or not
    cout << "Empty or not " << s.empty() << endl; // returning false as zero
}
