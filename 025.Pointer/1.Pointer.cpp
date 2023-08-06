#include <iostream>
using namespace std;

int main()
{
    // int num = 5;
    // cout << num << endl;
     // address of num
    // cout << "address of num is : " << &num << endl;

    // int *ptr = &num;
    // cout << "Value of num is : " << *ptr << endl;
    // cout << "Address of num is : " << ptr << endl;

    // double d = 4.3;
    // double *p2 = &d;

    // cout << "Value of num is : " << *p2 << endl;
    // cout << "Address of num is : " << p2 << endl;

    // cout << "Size of integer is " << sizeof(num) << endl;
    // cout << "Size of  Pointer is " << sizeof(ptr) << endl;
    // cout << "Size of  Pointer is " << sizeof(p2) << endl;

    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (p)++;
    cout << "after " << num << endl;
    
    // coping a pointer
    cout<< "coping a pointer";

    int *q = p;
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;

    return 0;
}