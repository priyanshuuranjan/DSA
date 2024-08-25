#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout <<  row << " ";

        }
        cout << endl;
    }
}

/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/