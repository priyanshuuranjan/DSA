#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int rem;
    int mul = 1; // 2^i
    int ans = 0;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << ans;
}
