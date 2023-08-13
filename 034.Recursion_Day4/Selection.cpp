#include <iostream>
using namespace std;

void selectionSort(int *arr, int size, int minIndex)
{
    // base case
    if (size == 0 || size == 1 || minIndex == size)
    {
        return;
    }

    // processing
    for (int i = minIndex + 1; i < size; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            swap(arr[minIndex], arr[i]);
        }
    }
    // recursive call
    selectionSort(arr, size, minIndex + 1);
}

int main()
{

    int arr[7] = {7, 6, 5, 4, 3, 2, 1};
    int size = 7;
    int minIndex = 0;
    selectionSort(arr, size, minIndex);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}