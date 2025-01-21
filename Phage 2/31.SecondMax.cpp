#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int max = arr[0];
    int secondMax = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    cout << "Second Max: " << secondMax << endl;

    return 0;
}
