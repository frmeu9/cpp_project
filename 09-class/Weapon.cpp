//
// Created by Francoune on 2021-01-16.
//

#include "Weapon.h"

using namespace std;


Weapon::Weapon() : m_name("Old rusty sword"), m_damage(10) {

}

Weapon::Weapon(string name, int damage) : m_name(name), m_damage(damage) {

}

void Weapon::change(string name, int damage) {
    m_name = name;
    m_damage = damage;
}

void Weapon::show() const {
    cout << "Weapon : " << m_name << " (Damage : " << m_damage << ")" << endl;
}

int Weapon::getDamage() const {
    return m_damage;
}

string Weapon::getName() const {
    return m_name;
}