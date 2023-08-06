#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 5, 6, 51};

    cout << "address off first memory block is" << arr << endl;
    // address of nikale k liye &arr[10];
    cout << "address off first memory block is" << &arr[0] << endl;

    cout << " 4th " << *arr << endl; // print 1st index i.e 23
    cout << " 5th " << *arr + 1 << endl; // print 1st index i.e 23+1 = 24 
    cout << " 6th " << *(arr + 1) << endl; // print 2nd index i.e 5

    int i = 3;
    cout << i[arr] << endl;

    // ! Working of size() of an array and pointer

    int temp[10];
    cout << sizeof(temp) << endl;

    // ! For a Pointer

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;

    // ! size  of the array and pointer

    int a[20] = {1, 2, 3, 4, 5};
    cout << &a[0] << endl;
    cout << "--> " << &a << endl;
    cout << a << endl;
    cout << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << "--> " << &p << endl;

    //! Symbol Table

    // Error
    //  arr=arr+1;

    int *ptrr = &arr[0];
    cout << ptrr << endl;
    ptrr = ptrr + 1;

    cout << ptrr << endl;

    return 0;
}
