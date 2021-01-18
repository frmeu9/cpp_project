//
// Created by Francoune on 2021-01-16.
//

#ifndef INC_09_CLASS_WEAPON_H
#define INC_09_CLASS_WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
public:

    Weapon();
    Weapon(std::string name, int damage);
    void change(std::string name, int damage);
    void show() const;
    int getDamage() const;
    std::string getName() const;

private:

    std::string m_name;
    int m_damage;
};

#endif //INC_09_CLASS_WEAPON_H
