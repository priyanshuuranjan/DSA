// ishme ek key ek hi value ko point krta hai
#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "priyanshu";
    m[13] = "priyanshu";
    m[2] = "priyanshu";

    m.insert({5, "alpha"});
    cout << "before erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}
