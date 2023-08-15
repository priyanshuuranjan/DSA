#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
}
 int quickSort(int arr[], int s, int e){
    //base case 
    if (s >=e) return ;

    //partition karenge
    int pivot = partition(arr , s, e);

    // left wala part
    quickSort(arr, s, pivot-1);

    // right wala part
    quickSort(arr,pivot+1, e );

 }

int main()
{
    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

