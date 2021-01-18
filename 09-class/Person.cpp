//
// Created by Francoune on 2021-01-16.
//

#include "Person.h"

using namespace std;

Person::Person() : m_level_life(100), m_level_magic(100) {
    //Nothing to write here, but it's cleaner
}

Person::Person(string weapon_name, int damage_weapon) : m_level_life(100), m_level_magic(100), m_weapon(weapon_name, damage_weapon) {

}

Person::Person(Person const &other) : m_level_life(other.m_level_life), m_level_magic(other.m_level_magic), m_weapon(other.m_weapon.getName(), other.m_weapon.getDamage()) {
}

// methods
void Person::recieveDamage(int damage) {
    m_level_life -= damage;

    if (m_level_life < 0) {
        m_level_life = 0;
    }
}

void Person::attack(Person &target) {
    target.recieveDamage(m_weapon.getDamage());
}

void Person::drinkLifePotion(int potion_quantity) {
    m_level_life += potion_quantity;

    if (m_level_life > 100) {
        m_level_life = 100;
    }
}

void Person::changeWeapon(string new_weapon_name, int damage_new_weapon) {
    m_weapon.change(new_weapon_name, damage_new_weapon);
}

// crating const method ensure that nobody modifies the attributes, read-only
bool Person::isAlive() const {
    if (m_level_life > 0) {
        return true;
    } else {
        return false;
    }
}

void Person::showStatus() const
{
    cout << "Life: " << m_level_life << endl;
    cout << "Mana: " << m_level_magic << endl;
    cout << "Weapon: " << m_weapon.getName() << "(damage: " << m_weapon.getDamage() << ")" << endl;
}

// destructor
Person::~Person() {

}



