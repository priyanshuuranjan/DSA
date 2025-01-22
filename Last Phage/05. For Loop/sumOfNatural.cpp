#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i; // sum += i;
    }
    cout << sum << " ";
}

// simple

/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    cout << (n * (n + 1)) / 2;
}

*/