#include <iostream>
#include "Hero.cpp"
using namespace std;

class Heroo
{
    // properties
    int health; // health
};

int main()
{
    // creating object
    Heroo h1;

    Hero alpha;
    cout << "village is:" << alpha.village << endl;

    cout << "size: " << sizeof(h1) << endl; // its rint 4
    return 0;
}
