#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        char name = 'a' + row - 1;
        for (int col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        cout << endl;
    }
}

/*

a 
b b
c c c
d d d d
e e e e e

*/