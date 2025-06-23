#pragma once
#include <memory>
using namespace std;

class Character;
class Monster;

class GameManager 
{
public:
    static unique_ptr<Monster> generateMonster(int level);
    static void displayInventory(Character& player);
    static bool battle(Character& player);
};
