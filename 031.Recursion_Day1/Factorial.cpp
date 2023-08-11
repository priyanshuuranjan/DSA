#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case -->> Ruk jao
    if (n == 0)
    {
        return 1;
    }
    // sorting this part ,.... this part acn also be written like this...

    // int chhoti = factorial(n - 1);
    // int badi = n * chhoti;
    // return badi;

    return n * factorial(n - 1);
}
int main()
{

    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}