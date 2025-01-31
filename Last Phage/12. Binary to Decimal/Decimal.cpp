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
        rem = num % 10;  //  last digit nikal lo 
        num = num / 10;  // divide kr k number nikal lo
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << ans;
}
