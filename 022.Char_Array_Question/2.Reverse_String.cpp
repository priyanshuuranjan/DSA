#include <iostream>
using namespace std;
int reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

// length of string

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your Name:" << endl;
    cin >> name;

    cout << "Your Name is: " << endl;
    cout << name << endl;

    cout << " Length is : " << getLength(name) << endl;

    // int len = getLength(name);
    // cout << " Length : " << len << endl;
    reverse(name, getLength(name));

    cout << "Your Name in reverse is : ";
    cout << name << endl;
}
