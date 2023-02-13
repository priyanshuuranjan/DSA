#include <iostream>
using namespace std;
// prime no ->1
// Not prime no. ->0
bool isPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        // divide ho gya hai , mtlb not a prime no.
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "Answer is Prime" << endl;
    }
    else
    {
        cout << "Answer is not a prime number" << endl;
    }
    return 0;
}