#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int rem, ans = 0, next = 1;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = rem * next + ans;
        next = next * 10;
    }
    cout << ans << endl;
}
