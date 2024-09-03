#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {12, 3, 1, 7, 8};
    int n;
    bool found = false; // Flag to track if the element is found

    cout << "Enter the number to search: ";
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            cout << "Element found at index " << i << endl;
            found = true;
            break; // Exit the loop if element is found
        }
    }

    if (!found)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
