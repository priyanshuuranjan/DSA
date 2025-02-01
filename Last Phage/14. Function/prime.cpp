#include <iostream>
using namespace std;

bool prime(int n) // Function declaration
{
    if (n > 2)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
        return true;
    }
}

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << prime(a) << endl;
    cout << prime(b) << endl;
    cout << fact(a) << endl;
    cout << fact(b) << endl;
}