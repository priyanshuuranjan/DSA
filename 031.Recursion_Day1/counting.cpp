#include <iostream>
using namespace std;

void print(int n)
{
    // base case -->> Ruk jao
    if (n == 0)
    {
        return;
    }
    //  cout << n << endl;-->> agr ye yha pe rha to output 5 4 3 2 1 aishe aayega
    // Recursive realation
    print(n - 1);
    cout << n << endl; // yha pe hai to output 1 2 3 4 5 aishe aayega
}
int main()
{

    int n;
    cin >> n;
    cout << endl;
    print(n);
    return 0;
}