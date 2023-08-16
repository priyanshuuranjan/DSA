#include <iostream>
#include "Hero.cpp"
using namespace std;

class Hero
{
    // properties
public:
    int health;
    int village;
    void print()
    {
        cout << "ye print hoga agr Heroo private v ho to kyo ki ye same clss k andar hi hai " << endl;
    }
};

int main()
{
    // creating object
    // Hero h1;
    Hero alpha;
    // abhi garbage value aarha hai ishko print krane pe ushke liye hm isko value hi dede rhe hai

    alpha.health = 70;
    alpha.village = 50;

    cout << "health is: " << alpha.health << endl;

    cout << "village is: " << alpha.village << endl;

    // cout << "size: " << sizeof(h1) << endl; // its rint 4
    return 0;
}
