#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int rem;
    int mul = 1; // 10^i
    int ans = 0;

    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans;
}
