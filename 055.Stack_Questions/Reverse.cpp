#include <iostream>
using namespace std;
#include <stack>

int main()
{
    string str = "priyanshu";

    stack<char> s; // initializing

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans = ""; // empty ans

    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout << "Ans is: " << ans << endl;

    return 0;
}
