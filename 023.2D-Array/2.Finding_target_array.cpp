// Linear  search

#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; ++row)
    {
        for (int col = 0; col < 4; ++col)
        {

            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // creating 2D Array

    int arr[3][4];

    // Taking input

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; ++col)
        {
            cin >> arr[row][col];
        }
    }

    // printing part
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search for " << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Found " << target << endl;
    }
    else
    {
        cout << "Not found " << target << endl;
    }
    return 0;
}
