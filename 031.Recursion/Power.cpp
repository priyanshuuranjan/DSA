#include <iostream>
using namespace std;

int power(int n)
{
    // base case -->> Ruk jao
    if (n == 0)
    {
        return 1;
    }
    // recursive relation
    // sorting these things
    // int chhoti = power(n - 1);
    // int badi = 2 * chhoti;
    // return badi;
    return  2 * power(n - 1);
}
int main()
{

    int n;
    cin >> n;
    cout << power(n) << endl;
    return 0;
}