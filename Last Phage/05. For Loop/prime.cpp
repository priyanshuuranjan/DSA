#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << "Not Prime";
    }
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime" << " ";
}