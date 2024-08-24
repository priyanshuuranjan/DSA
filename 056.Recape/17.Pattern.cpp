#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (char col = 'a'; col <= 'e'; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}


/*----------------------------------------------------------------

a b c d e 
a b c d e 
a b c d e 
a b c d e 
a b c d e 


*/