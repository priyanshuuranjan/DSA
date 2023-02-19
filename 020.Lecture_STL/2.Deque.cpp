// basically it is used for insertion or deletion in an array from front or back eassly
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d; // declearing

    d.push_back(1);  // piche se 1 dala
    d.push_front(2); // aage se 2 dala

    // for (int i : d)
    // {
    //     cout << i << endl;
    // }
    // d.pop_back();
    // cout << endl;
    // for (int i : d)
    // {
    //     cout << i << endl;
    // }

    cout << "print Index Element " << d.at(1) << endl; // ckecking the index
    // checking the front and back elements
    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    // checking the element is empty or not
    cout << "Empty or not " << d.empty() << endl;

    // delecting the element
    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase " << d.size() << endl;
}
