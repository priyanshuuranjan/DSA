#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    }

    int chhoti = factorial(n-1);
    int badi = n*chhoti;

    return badi;

}
int main(){

    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}