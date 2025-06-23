#pragma once
#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "Item.h"

using namespace std;
class Item;

class Character 
{
public:
    string name;
    int level = 1;
    int health = 200;
    int maxHealth = 200;
    int attack = 30;
    int experience = 0;
    int gold = 0;
    vector<unique_ptr<Item>> inventory;

    Character(string n);
    void Status();
    void levelUp();
    void useItem(int index);
};
