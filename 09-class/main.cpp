#include <iostream>
#include "Person.h"
using namespace std;


int main() {
    Person david, goliath("Sharp Sword", 20);
    Person john(goliath);

    cout << "David" << endl;
    david.showStatus();
    cout << "Goliath" << endl;
    goliath.showStatus();
    cout << "John" << endl;
    john.showStatus();

    goliath.attack(david);
    david.drinkLifePotion(20);
    goliath.attack(david);
    david.attack(goliath);
    goliath.changeWeapon("Hache2", 40);
    goliath.attack(david);

    cout << "David" << endl;
    david.showStatus();
    cout << "Goliath" << endl;
    goliath.showStatus();
    cout << "John" << endl;
    john.showStatus();

    return 0;
}