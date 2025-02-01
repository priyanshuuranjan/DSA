#include <iostream>
using namespace std;

int Sum(int a, int b)   // Function declaration
{
    return a + b;   // Function Define
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << Sum(a, b);
}