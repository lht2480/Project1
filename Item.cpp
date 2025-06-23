#include "Item.h"
#include "Character.h"
#include <iostream>

void HealthPotion::use(Character* character) 
{
    character->health += 50;
    if (character->health > character->maxHealth)
        character->health = character->maxHealth;
    cout << character->name << "이(가) 체력 포션을 사용했습니다! 체력 +50\n";
}

void AttackBoost::use(Character* character) 
{
    character->attack += 10;
    cout << character->name << "이(가) 공격력 증가 포션을 사용했습니다! 공격력 +10\n";
}
