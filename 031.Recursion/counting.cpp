#include <iostream>
using namespace std;

void print(int n)
{
    // base case -->> Ruk jao
    if (n == 0)
    {
        return;
    }

    // Recursive realation
    print(n - 1);
    cout << n << endl;
}
int main()
{

    int n;
    cin >> n;
    cout << endl;
    print(n);
    return 0;
}