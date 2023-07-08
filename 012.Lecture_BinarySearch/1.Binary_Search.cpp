#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // comparing the value of mid to key ... if mid is equal to key then it returns the key value directly...
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 3, 6, 8, 14, 25};
    int odd[5] = {3, 5, 6, 9, 11};

    // aishe v declear kr k kr skte hai lekhin code heavy ho jayega
    
    // int indexeven = binarySearch(even, 6, 14);
    // int indexodd = binarySearch(odd, 5, 6);

    cout << "index of 14 is " << binarySearch(even, 6, 14) << endl;
    cout << "index of 6 is " << binarySearch(odd, 5, 6) << endl;

    return 0;
}
