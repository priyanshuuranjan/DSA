#include <iostream>
using namespace std;

void inputArray(int arr[], int size)
{
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    inputArray(arr, size);
    int total = sumArray(arr, size);
    cout << "The sum of the elements of the array is: " << total << endl;
    return 0;
}

// my solution 
// #include <iostream>
// using namespace std;
// int sumArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int sum = arr[0] + arr[1] + arr[2] + arr[3];
//         return sum;
//     }
// }
// int main()
// {
//     int sum;
//     int size;
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> size;
//     int arr[10]; // size of an array

//     // taking input in array for size
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     sum = sumArr(arr, n);// declearation 
//     cout << sum << endl; // printing the value
// }
