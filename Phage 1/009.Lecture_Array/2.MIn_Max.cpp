#include <iostream>
using namespace std;

int max(int array[], int size)
{
    int maxi = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, array[i]);
        // if (array[i] > max)
        // {
        //     max = array[i];
        // }
    }
    // returning the max value
    return maxi;
}
int min(int array[], int size)
{
    int min = INT32_MAX;

    for (int i = 0; i < size; i++)
    {

        if (array[i] < min)
        {
            min = array[i];
        }
    }
    // returning the min value
    return min;
}

int main()
{
    int size;
    cin >> size;

    int arr[10]; // size of an array
    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum value is: " << max(arr, size) << endl;
    cout << "Minimum value is: " << min(arr, size) << endl;
}