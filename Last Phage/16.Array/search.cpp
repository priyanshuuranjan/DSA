#include <iostream>
using namespace std;

int main()
{
    int arr[] = {15, 25, 13, 89, 45};
    int index = -1;
    int x = 25;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }

    cout << "Numer is present" << index;
}