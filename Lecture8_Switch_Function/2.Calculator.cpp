#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;

    char operations;
    cout << "Enter the operations you want to performed" << endl;
    cin >> operations;

    switch (operations)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    default:
        cout << "Please enter a valid operation" << endl;
    }
}