#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **р2 = &p;
    cout << endl
         << endl
         << " Sab sahi chal rha h " << endl
         << endl;
    cout << " printing p " << p << endl;
    cout << "address of p " << &p << endl;
    return 0;
}