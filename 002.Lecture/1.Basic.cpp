#include <iostream>
using namespace std;
int main()
{
    int a = 123;
    cout << a << endl;

    char b = 'h';
    cout << b << endl;

    float f = 10.23;
    cout << f << endl;

    double d = 10.23;
    cout << d << endl;

    int size = sizeof(d);
    cout << "size of a is : " << size << endl;

    int aa = 2 / 5;
    cout << aa << endl;

    float h = 2.0 / 5;
    cout << h << endl;

    double hh = 2.0 / 5;
    cout << hh << endl;

    // Relational Operator
    int m = 4;
    int k = 5;
    bool num = (m == k);
    cout << num << endl;

     bool num1 = (m <= k);
    cout << num1 << endl;
}