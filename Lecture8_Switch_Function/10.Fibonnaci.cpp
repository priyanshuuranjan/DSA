// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 10;
//     int a = 0;
//     int b = 1;
//     // displays the first two terms which is always 0 and 1
//     cout << a << " " << b << " ";
//     for (int i = 1; i <= n; i++)
//     {
//         int nextNumber = a + b;
//         cout << nextNumber << " ";
//         a = b;
//         b = nextNumber;
//     }
// }
#include <iostream>
using namespace std;

int fibonacci(int n) {
if (n <= 1) {
return n;
}
return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
int n;
cout << "Enter the number of terms for Fibonacci series: ";
cin >> n;
cout << "Fibonacci series: ";
for (int i = 0; i < n; i++) {
cout << fibonacci(i) << " ";
}
cout << endl;
return 0;
}