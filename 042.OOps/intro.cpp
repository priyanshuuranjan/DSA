#include <iostream>
using namespace std;

class Hero
{
    // properties
    int health; // health
};

int main()
{
    // creating object
    Hero h1;
    cout << "size: " << sizeof(h1) << endl; // its rint 4
    return 0;
}
