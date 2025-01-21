#include <iostream>
#include <climits> // Add this line to include the <climits> header file
using namespace std;

int main()
{
    int arr[5] = {12, 3, 1, 7, 8};
    int ans = INT_MIN;
    // MAx value
    for (int i = 0; i < 5; i++)
        if (arr[i] > ans)
            ans = arr[i];
    cout << ans;
    return 0;
}
