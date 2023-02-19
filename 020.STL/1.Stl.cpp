#include <iostream>
#include <vector>;
using namespace std;
int main()
{
    vector<int> v;                            // vector of type int
    cout << "Size->" << v.capacity() << endl; // to check the size of vector which is always start with 0

    v.push_back(1); // value dal rhe hai yha pe hm
    cout << "Size->" << v.capacity() << endl;

    v.push_back(2); // value dal rhe hai yha pe hm
    cout << "Size->" << v.capacity() << endl;

    v.push_back(3);                           // capacity bata hai space assign hua hai element k liye
    cout << "Size->" << v.capacity() << endl; // size refers kitne element pare hai

    cout << "front " << v.front() << endl; // checking index
    cout << "back " << v.back() << endl;   // checking index

    // ishme oo last wale element ko nikal k fek dega
    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    // clearing the vector and know phle ushka size kya tha oor  ab kya hai

    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;
}
