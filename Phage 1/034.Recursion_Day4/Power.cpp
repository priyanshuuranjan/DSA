#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    //! RECURSIVE CALL
    int ans = power(a, b / 2);

    //! Important Formula
    /*
    a^b = 1. when b is even ->> a^b/2 * a^b/2
        2. when b is odd ->> a* a^b/2 * a^b/2
     */
    //! if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        //! if b is odd
        return a * ans * ans;
    }
}

int main()
{

    int a, b;
    cin >> a >> b;
    cout << endl;
    int ans = power(a, b);

    cout << "Answer is " << ans << endl;

    return 0;
}