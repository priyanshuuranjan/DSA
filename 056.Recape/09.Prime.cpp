#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    if (n < 2)
    {
        cout << "Not Prime Number";
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a prime number." << endl;
            }
            else
            {
                cout << n << " is a prime number." << endl;
            }
        }
    }
}
