#include <iostream>
using namespace std;

void printSum(int arr[][4], int row, int col)
{
    for (int row = 0; row < 3; ++row)
    {
        int sum = 0;
        for (int col = 0; col < 4; ++col)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// largest row sum
int isLarger(int arr[][4], int row, int col)
{
    int maxi = INT32_MIN;
    int rowIndex = -1; // for know the sum index
    for (int row = 0; row < 3; ++row)
    {
        int sum = 0;
        for (int col = 0; col < 4; ++col)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row; // to know the index
        }
    }
    cout << "The max Sum is: " << maxi << endl;
    return row;
}

int main()
{
    // creating 2D Array

    int arr[3][4];

    // Taking input
    cout << "Enter Your Number: " << endl;
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

    cout << "Your Sum is : "
         << " ";
    printSum(arr, 3, 4);

    cout << "Max row is at index: " << isLarger(arr, 3, 4);

    return 0;
}
