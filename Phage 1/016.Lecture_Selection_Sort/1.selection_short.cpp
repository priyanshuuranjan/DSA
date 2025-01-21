#include <iostream>
using namespace std;
int getSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < minIndex) // index start from 0
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
// function to print an array

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {5, 4, 10, 1, 6, 2}; // arrray
    int  n;

    n = sizeof(arr) / sizeof(int);

    cout << "Unsorted Array :";
    print(arr, n);

    getSort(arr, n);
    cout << "Sorted Array :";

    print(arr, n);
    return (0);
}