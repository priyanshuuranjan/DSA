#include <iostream>
using namespace std;

int main()
{

    // create 2 d array
    int arr[3][3];

    cout << "Enter the elements " << endl;
    // taking input -> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    /*
    // taking input -> col wise input
        for(int col=0; col<4; col++) {
            for(int row=0; row<3; row++) {
                cin >> arr[row][col];
            }
        }

    */

    cout << "Printing the array " << endl;
    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}