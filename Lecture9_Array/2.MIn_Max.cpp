// C++ program to demonstrate the use of std::max
#include <iostream>
#include <algorithm>
using namespace std;

// Defining the binary function
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int a = 7;
    int b = 28;

    cout << max(a, b, comp) << "\n";

    // Returns the first one if both the numbers
    // are same
    cout << max(7, 7, comp);

    return 0;
}

/*
#include<iostream>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;

    for(int i = 0; i<n; i++) {

        mini = min( mini, num[i]);

        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;

    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}


int main()
{

    int size;
    cin >> size;

    int num[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;

    return 0;
}
*/