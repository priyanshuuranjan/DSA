#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) // name[i] != '\0'
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

    cout << " Length is: " << getLength(name) << endl;
}
