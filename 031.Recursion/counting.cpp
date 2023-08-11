#include <iostream>
using namespace std;

void print(int n)
{
    // base case -->> Ruk jao
    if (n == 0)
    {
        return;
    }
    // sorting this part ,.... this part acn also be written like this...

    // int chhoti = factorial(n - 1);
    // int badi = n * chhoti;
    // return badi;

    print(n - 1);
}
int main()
{

    int n;
    cin >> n;
    cout << print(n) << endl;
    return 0;
}