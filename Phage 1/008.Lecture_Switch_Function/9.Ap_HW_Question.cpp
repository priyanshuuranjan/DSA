// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     int Ap= (3*n+7);
//     cout<<Ap<<endl;
// }

#include <iostream>

using namespace std;

int findN(int n)
{
    return (3 * n + 7);
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The value of Ap is: " << findN(n) << endl;

    return 0;
}
