#include <iostream>
#include "Hero.cpp"
using namespace std;

class Heroo
{
    // properties
public:
    int health; // health
    void print()
    {
        cout << "ye print hoga agr Heroo private v ho to kyo ki ye same clss k andar hi hai " << endl;
    }
};

int main()
{
    // creating object
    Heroo h1;
    Heroo ram;
    cout << "health is: " << ram.health << endl;

    Hero alpha;
    cout << "village is: " << alpha.village << endl;

    cout << "size: " << sizeof(h1) << endl; // its rint 4
    return 0;
}
