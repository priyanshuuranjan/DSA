#include <iostream>
using namespace std;
int reverse(int arr[], int n)
{
    int s = 0;
    int e = n = 1;
    int ans = 0;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return ans;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // To print original array
    print(arr, n);
     
    // Function calling
    reverse(arr,n);
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    print(arr, n);
     
    return 0;
}