// // C++ program to demonstrate the use of std::max
// #include <iostream>
// #include <algorithm>
// using namespace std;

// // Defining the binary function
// bool comp(int a, int b)
// {
//     return (a < b);
// }
// int main()
// {
//     int a = 7;
//     int b = 28;

//     cout << max(a, b, comp) << "\n";

//     // Returns the first one if both the numbers
//     // are same
//     cout << max(7, 7, comp);

//     return 0;
// }

#include <iostream>
using namespace std;

int max(int array[], int size)
{
    int maxi = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi=max(maxi, array[i]);
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