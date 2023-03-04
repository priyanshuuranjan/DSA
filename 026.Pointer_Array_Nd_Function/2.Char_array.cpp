#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};

    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    // printing the entire String
    cout << c << endl;
}
