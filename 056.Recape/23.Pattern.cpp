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

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/