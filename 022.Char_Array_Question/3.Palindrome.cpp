#include <iostream>
using namespace std;
// check Palindrome
bool checkPalindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

// reversing function
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

    int len = getLength(name);
    cout << " Length : " << len << endl;
    reverse(name, len);

    cout << "Your Name is : ";
    cout << name << endl;

    cout << "Palindrome or Not: " << checkPalindrome(name, len) << endl;
}
