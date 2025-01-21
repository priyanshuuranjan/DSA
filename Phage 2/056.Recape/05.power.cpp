#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, power, num;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of pow: ";
    cin >> power;
    num = n;
    for (int i = 1; i < power; i++)
    {
        num = num * n;
    }
    cout << num << endl;
}
