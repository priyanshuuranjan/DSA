#include <iostream>
#include <climits> // Add this line to include the <climits> header file
using namespace std;

int main()
{
    int arr[] = {4, 8, 2, 6, 9, 10, 45};
    int ans = INT_MAX;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
        cout << ans << endl;
        return 0;
    }
}
