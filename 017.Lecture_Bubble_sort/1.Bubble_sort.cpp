#include <iostream>
using namespace std;
int bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1 use
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// function to print an arrayy
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{

    int arr[] = {10, 1, 7, 6, 14, 9};
    int i, j, n;
    n = sizeof(arr) / sizeof(int);
    cout << "Unsorted Array :"; // to print unsorted array
    print(arr, n);
    bubbleSort(arr, n);
    cout << "Sorted Array :"; // to print sorted array
    print(arr, n);
    return (0);
}