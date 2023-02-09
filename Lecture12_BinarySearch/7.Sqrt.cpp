#include <bits/stdc++.h>

using namespace std;

long long int sqrt(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecise(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i<precision; i++){
        factor = factor / 10;

        for(double j = ans; j*j<n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int tempSol = sqrt(n);
    // cout<<tempSol<<endl;
    double answer = morePrecise(n, 2, tempSol);
    cout<<answer<<endl;
    

    return 0;
}
