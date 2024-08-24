// 1st way 

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int j = 1; j <= 5; j++)
//     {
//         for (int i = 1; i <= 5; i++)
//         {
//             cout << "*" << "";
//         }
//         cout << endl;
//     }
// }



#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            cout << "*" << "";
        }
        cout << endl;
    }
}

