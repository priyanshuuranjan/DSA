#include <iostream>
using namespace std;

int main()
{
    // input
    int arr[5];
    int n;
    cout << "Enter the size of an array: ";
    cin >> n; // size of an array

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    // print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}