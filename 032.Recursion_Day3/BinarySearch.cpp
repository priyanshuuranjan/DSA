#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key)
{
    // base case
    if (start <= end)
    {
        return false;
    }
    int mid = start + (start - end) / 2;

    if ((arr[mid]) < key)
    {
        binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        binarySearch(arr, start, mid - 1, key);
    }
    mid = start + (start - end) / 2;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
}
