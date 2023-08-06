#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 4}; // integer array

    char ch[6] = "abcde";
    // here in case of arr cout prints its address value while in char cout works differently .. it print the entire data
    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    // print the entire String
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
    return 0;
}
