// Doubt Hai ishme 

#include <iostream>
#include <vector>
using namespace std;

vector<int> rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> temp(arr.size());
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
        arr = temp;
    }
}
// printing  function
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    int k;
 vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = rotate(v,k);
    cout << "Printing Reverse Array";
    print(ans);
}
