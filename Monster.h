#pragma once
#include <string>

using namespace std;

class Monster 
{
public:
    string name;
    int health;
    int attack;

    Monster(string n, int h, int a);
    void takeDamage(int dmg);
    bool isDead();
    virtual ~Monster() {}
    void Mstatus();
};