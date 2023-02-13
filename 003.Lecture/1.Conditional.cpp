#include <iostream>
using namespace std;
int main()
{
    /*
    int a;
    cin >> a;
    // if a is positive integer
    if (a > 0)
    {
        cout << "A is a positive" << endl;
    }
    else
    {
        cout << "A is not a positive" << endl;
    }
    */
    /*
    int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    if (a > b)
    {
        cout << "A is greater " << endl;
    }
    if (b > a)
    {
        cout << "B is greater " << endl;
    }
    */
    /*
     int a;
     cout << "Enter the value of a" << endl;
     cin >> a;

     if (a > 0)
     {
         cout << "A is positive " << endl;
     }
     else if (a < 0)
     {
         cout << "A is Negative " << endl;
     }
     else
     {
         cout << "A is zero" << endl;
     }
     */

    /* while Loop
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    */
    /* find the sum of 1 to n
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
     sum=sum+i;
     i++;
    }
    cout<<"Value of  sum is "<<sum<<endl;
    */

    /* Find the sum of all even no. between 1 to n
    int i, n, sum = 0;
    cout << "Print sum of even numbers till : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        // Check for even or not.
        if ((i % 2) == 0)
        {

            sum += i;
        }
    }

    cout << endl
         << "Sum of even numbers from 1 to " << n << " is : " << sum;

    return 0;
    */
    // To check a number is prime or not
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        // diviide hogya, not prime
        if (n % i == 0)
        {
            cout << "Number is not prime for" << i << endl;
        }
        else
        {
            cout << "Number is  prime for" << i << endl;
        }
        i = i + 1;
    }
}