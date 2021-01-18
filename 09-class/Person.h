//
// Created by Francoune on 2021-01-16.
//

#ifndef INC_09_CLASS_PERSON_H
#define INC_09_CLASS_PERSON_H

#include <string>
#include "Weapon.h"

class Person {
private:
    // attributes
    // all attributes must be private
    int m_level_life;
    int m_level_magic;
    Weapon m_weapon;

public:
    // contructor
    Person();
    Person(std::string weapon_name, int damage_weapon);
    Person(Person const& autre);
    // methods
    void recieveDamage(int damage);
    void attack(Person &target);
    void drinkLifePotion(int potion_quantity);
    void changeWeapon(std::string new_weapon_name, int damage_new_weapon);
    bool isAlive() const;
    void showStatus() const;

    // destructor
    ~Person();
};


#endif //INC_09_CLASS_PERSON_H
