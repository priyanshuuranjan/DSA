#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cin >> n;
    for (int i = 1; i <= n; i = i + 1)
    {
        fact = fact * i;
    }
    cout << fact;
}