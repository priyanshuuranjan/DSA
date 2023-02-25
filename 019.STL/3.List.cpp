#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    // printing part

    for (int i : l)
    {
        cout << i << " ";
    }

    // delecting part

    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    // finding the size 

    cout<<"size of list "<<l.size() << endl;
    
    // printing part 5 bar 100

    list<int> n(5,100);
    cout<<"Printing n "<<endl;
    for(int i:n){
        cout<<i<<endl;
    }
}
