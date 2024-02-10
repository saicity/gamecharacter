#pragma once
#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include <iostream>
#include <cstring>

class GameCharacter
{
  private:
    char* name;
    char* archetype;
    int healthPoints;
    int magicPower;
    int level;
  public:
    //Defines object with default values
    GameCharacter();
    //Defines object with provided values
    GameCharacter(const char* username, const char* archetype, int hp, int mp, int lvl);
    //Deallocates memory for the name member variable
    ~GameCharacter();

    //Displays character's name, hp and level
    void displayCharacterDetails() const;
    //Redduces character health points by the specified damage amount
    void takeDamage(int damage);
    //Increases character level by 1
    void levelUp();
};

#endif
