#include <iostream>
using namespace std;

// 1 -> Even
// 0 -> Odd

bool isEven(int a)
{
    // odd
    if (a & 1)
    {
        return 0;
    }
    else
    //Even
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "Number is Even" << num << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}