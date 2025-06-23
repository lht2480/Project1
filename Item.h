#pragma once
#include <string>
using namespace std;

class Character;

class Item 
{
public:
    virtual string getName() = 0;
    virtual void use(Character* character) = 0;
    virtual ~Item() {}
};

class HealthPotion : public Item
{
public:
    string getName() override 
    {
        return "체력 포션";
    }

    void use(Character* character) override;
};

class AttackBoost : public Item 
{
public:
    string getName() override
    {
        return "공격력 증가 포션";
    }

    void use(Character* character) override;
};