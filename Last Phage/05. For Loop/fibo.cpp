#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    int last = 0;
    int prev = 1;
    int current = 0;

    for (int i = 2; i <= n; i++)
    {
        current = last + prev;
        last = prev;
        prev = current;
    }

    cout << current << endl;
    return 0;
}
