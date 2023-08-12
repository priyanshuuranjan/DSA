#include <iostream>
using namespace std;
// ye kaise hua hoga full detail me dekhte hai print kra k

void print(int arr[], int n)
{
    cout << "Size of array is " << n << endl; // this print it in sequence way
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " "; //<<" " this will provide space between no.
    }
    cout << endl;
}
bool linearSearch(int arr[], int size, int key)
{
    // printing the hole process upar wale ko print yha pe kra rhe hai
    print(arr, size);
    // base case
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else
    {
        // Recursive method
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 5;
    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
