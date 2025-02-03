#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6];
    cout << "Enter 6 elements of the array: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != firstMax)
        {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN)
    {
        cout << "There is no second maximum element." << endl;
    }
    else
    {
        cout << "The second maximum element is: " << secondMax << endl;
    }

    return 0;
}
