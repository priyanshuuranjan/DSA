#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            int value = n - row;
            cout << value;
            cout << "*";
            value--;
            col++;
        }
        cout << endl;
        row++;
    }
}