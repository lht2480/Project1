#include "Monster.h"
#include <iostream>

using namespace std;

Monster::Monster(string n, int h, int a) : name(n), health(h), attack(a) {}

void Monster::takeDamage(int dmg) 
{
    health -= dmg;
}

bool Monster::isDead() 
{
    return health <= 0;
}