#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
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

    int indexeven = binarySearch(even, 6, 14);
    int indexodd = binarySearch(odd, 5, 6);

    cout << "index of 14 is " << indexeven << endl;
    cout << "index of 6 is " << indexodd << endl;

    return 0;
}

