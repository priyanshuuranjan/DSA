#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key)
{
    // base case

    // elememt not found
    if (start <= end)
    {
        return false;
    }
    int mid = start + (start - end) / 2;
    // element found
    if (arr[mid] == key)
    {
        return true;
    }
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
    int arr[5] = {1, 5, 6, 7, 10};
    int size = 5;
    int key = 10;
    cout << "found" << binarySearch(arr, size, key) << " " << endl;
    return 0;
}
