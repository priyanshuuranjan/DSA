// line pe jo phle lagat hai ushhki phle bari aati hai
// first in  first out
#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<string> q;

    q.push("Priyanshu");
    q.push("Singh");
    q.push("Alpha");

    // printing part
    cout << "1st element " << q.front() << endl; // Priyanshu

    // pop me jo phle jata hai oo phle nikalta v hai
    q.pop();
    cout << "1st element " << q.front() << endl; // Singh output

    // size
    cout << "Size after pop " << q.size() << endl;

    // Empty or not

    cout<<"Empty or not "<< q.empty() << endl;
}
