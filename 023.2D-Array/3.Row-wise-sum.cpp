#include <iostream>
using namespace std;

void printSum(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; ++row)
    {
        int sum = 0;
        for (int col = 0; col < 3; ++col)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    // creating 2D Array

    int arr[3][3];

    // Taking input

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; ++col)
        {
            cin >> arr[row][col];
        }
    }

    // printing part
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Your Sum is : " << " ";
    printSum(arr, 3, 3);

    return 0;
}
