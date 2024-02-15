#pragma once
#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include <iostream>
#include <cstring>

//This class is responsible for handlings the stats of an invidivual character
class Stats
{
  private:
  //Defines how strong a melee attack is
  int attack;
  //Defines how strong a magical attack is
  int intelligence;
  //Defines the protection against melee attacks regarding battle
  int defense;
  //Defines the protection against magic attacks regarding battle
  int magicDefense;
  //Defines how fast a game character is in battle regarding who goes first
  int speed;
  //Defines how fast a game character can attack
  int dexterity;
  public:
}

//This class is responsible for handling the attributes of a character in the game (players, enemies, etc.)
class GameCharacter
{
  private:
    //A dynamically stored name that represents who the game character is
    char* name;
    //A dynamically stored archetype that represents what a game character's stats would typically look like if they belong to a class
    char* archetype;
    //Represents their health in and outside of battle
    int healthPoints;
    //Represents their magic power in and outside of battle
    int magicPower;
    //Represents their level in and outside of battle
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
