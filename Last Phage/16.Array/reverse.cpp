#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    cout << "Enter 6 elements of the array: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = 5;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Without input

/*


#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int start = 0, end = 5;
    while (start < end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
 */