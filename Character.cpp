#include "Character.h"
#include "Item.h"

Character::Character(string n) : name(n) {}

void Character::Status() 
{
    cout << "[상태] 이름: " << name << " | 레벨: " << level << " | 체력: " << health
        << "/" << maxHealth << " | 공격력: " << attack
        << " | 경험치: " << experience << "/100 | 골드: " << gold << endl;
}

void Character::levelUp() 
{
    while (experience >= 100 && level < 10) 
    {
        experience -= 100;
        level++;
        health += level * 20;
        attack += level * 5;
        maxHealth = health;
        cout << "레벨 업! 현재 레벨: " << level << ", 체력: " << health << ", 공격력: " << attack << endl;
    }
}

void Character::useItem(int index) 
{
    if (index >= 0 && index < inventory.size()) {
        inventory[index]->use(this);
        inventory.erase(inventory.begin() + index);
    }
} 