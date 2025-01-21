#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        // arr[mid] == mid
        if (arr[mid] == key)
        {
            return mid;
        }
        //  arr[mid]>mid
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        // arr[mid]<mid
        else
        {
            end = mid - 1;
        }
        return -1;
    }
}
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    cout << "Enters the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search for ";
    cin >> key;

    cout << BinarySearch(arr, n, key);
    return 0;
}
