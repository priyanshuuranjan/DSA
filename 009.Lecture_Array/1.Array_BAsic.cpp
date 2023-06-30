#include <iostream>
using namespace std;
// function call...
void printArray(int arr[], int size)
{
    cout << "Printing the Array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}
int main()
{
    int number[15];
    // accessing an array....
    cout << "value of 14 index " << number[14] << endl;

    // initialising an array
    int second[3] = {0, 1, 5};

    // accesing an element....
    cout << "value at 2 index " << second[2] << endl;

    int third[15] = {0, 1, 5};
    int n = 15;
    cout << "Printing the Array " << endl;
    // printing the array

    printArray(third, 15);

    // printing the array
    int fourth[10] = {0};
    n = 10;
    printArray(fourth, 10);
}
