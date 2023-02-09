#include <iostream>
using namespace std;

// Function to find the peak in the array using binary search approach
int findPeak(int arr[], int start, int end, int n)
{
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int even[6] = {2, 3, 6, 50, 14, 10};
    int odd[5] = {3, 5, 9, 8, 12};

    int n = 6;
    n = 5;

    cout << "The peak array is at index " << findPeak(even, 0, n - 1, n) << endl;

    cout << "The peak array is at index " << findPeak(odd, 0, n - 1, n) << endl;

    return 0;
}

/* another method
#include <iostream>
using namespace std;

// Function to find the peak in the array using binary search approach
int findPeak(int arr[], int start, int end, int n)
{
    int mid = start + (end - start) / 2;

    // Check if the middle element is a peak
    //  checking that is mid value is greater than before of one index
    // also checking that is mid value is greater than after of one index
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

    // If the middle element is not a peak, check in the left subarray
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeak(arr, start, mid - 1, n);

    //  Check in the right subarray
    else
        return findPeak(arr, mid + 1, end, n);

    int main()
    {
        int even[6] = {2, 3, 6, 50, 14, 10};
        int odd[5] = {3, 5, 9, 8, 12};

        int n = 6;
        n = 5;

        cout << "The peak array is at index " << findPeak(even, 0, n - 1, n) << endl;

        cout << "The peak array is at index " << findPeak(odd, 0, n - 1, n) << endl;

        return 0;
    }
    */
