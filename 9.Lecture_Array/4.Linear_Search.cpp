#include <iostream>
using namespace std;
bool search(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            return true;
        }
    }
    return 0;
}
int main() 
{
    int arr[10] = {0, 1, 2, 3, 4, 15, 6, -5, 100, 20};
    int number;
    cin >> number;
    bool found = search(arr, 10, number);
    if (found)
    {
        cout << "Number is Present " << endl;
    }
    else
    {
        cout << "Number is Absent " << endl;
    }
}
