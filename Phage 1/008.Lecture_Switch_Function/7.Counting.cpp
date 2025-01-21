#include <iostream>
using namespace std;
// function signature
void printCounting(int n)
{
    // function body hai
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    // function call hai
    printCounting(n);
}