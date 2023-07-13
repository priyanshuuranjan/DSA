#include <iostream>
using namespace std;

int main()
{
    // Creating 2 d Array

    int arr[3][4];

    // taking input -> row wise input.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // takig input ->> col wise input
    // for (int j = 0; j < 4; j++)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    // printing part
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;

        return 0;
    }
}
