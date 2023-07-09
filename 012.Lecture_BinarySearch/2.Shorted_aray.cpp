#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid; // store answer
            e = mid - 1; // end ko piche leke k aaagye 
        }
        else if (key > arr[mid]) // Right me jao
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // left me jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// last occurrence

int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid; // store answer
            s = mid + 1; 
        }
        else if (key > arr[mid]) // Right me jao
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // left me jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[6] = {1, 2, 3, 3, 5, 6};
    cout << "First occurrence of 3 is at Index " << firstOcc(even, 6, 3) << endl;
    cout << "Last occurrence of 3 is at Index " << lastOcc(even, 6, 3) << endl;
}
