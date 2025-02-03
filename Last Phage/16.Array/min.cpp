#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {99, 12, 83, 45, 5};
    int ans = INT_MAX;
    // min value in array
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;

    // max value
    ans = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;
}