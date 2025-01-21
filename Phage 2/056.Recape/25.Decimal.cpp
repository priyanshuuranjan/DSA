#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int rem, ans = 0, next = 1;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * next + ans;
        next = next * 2;
    }
    cout << ans << endl;
}
