#define _CRT_SECURE_NO_WARNINGS
#include "GameCharacter.h"

//NOTE: Removed this due to no name clash in this regular constructor
GameCharacter::GameCharacter() : healthPoints(100), magicPower(5), level(1)
{
  //Dealing with the name 
  //The default name is player which is why it's here
  name = new char[7];

  //Validating if the name was allocated properly
  if (name != nullptr)
  {
    std::strcpy(name, "Player");
  }
  else
  {
    std::cout << "Memory not allocated for default name";
    name = nullptr;
  }

  //Dealing with the archetype
  archetype = new char[8];

  if (archetype != nullptr)
  {
    std::strcpy(archetype, "Warrior");
  }
  else
  {
    std::cout << "Memory not allocated for archetype\n";
    archetype = nullptr;
  }
}

GameCharacter::GameCharacter(const char* name, const char* archetype, int healthPoints, int magicPower, int level)
{
  //Names usually aren't past 20
  this->name = new char[20];
  
  //Validating if the name was allocated properly
  if (this->name != nullptr)
  {
    if (std::strlen(name) > 20)
    {
      std::cout << "Name is greater than 20 characters long.\n";
      std::strcpy(this->name, name);
    }
    else
    {
      std::strcpy(this->name, name);
    }
  }
  else
  {
    std::cout << "Memory was not allocated properly for the name.\n";
    this->name = nullptr;
  }

  //Longest archetype is 9 characters long
  this->archetype = new char[9];

  if (this->archetype == nullptr)
  {
    std::cout << "Memory was not allocated for the archetype\n";
    this->archetype = nullptr;
  }
  else
  {
    //If it's greater than sorcerer or less than bandit, the user never put in a proper archetype 
    if (std::strlen(archetype) > 9 || std::strlen(archetype) < 7)
    {
      std::cout << "Given archetype is greater than the maximum characters allowed\n";
    }
    else
    {
      //If it's not a valid archetype, a player shouldn't have something random
      if ((std::strcmp(archetype,"Warrior") != 0) && (std::strcmp(archetype, "Sorcerer") != 0) && (std::strcmp(archetype, "Bandit") != 0))
      {
        std::cout << "Given archetype does not match the following valid archetypes\n";
        std::cout << "Warrior\n";
        std::cout << "Sorcerer\n";
        std::cout << "Bandit\n";
      }
      else
      {
        std::strcpy(this->archetype, archetype);
      }
    }
  }

  this->healthPoints = healthPoints;
  this->magicPower = magicPower;
  this->level = level;
}

GameCharacter::~GameCharacter()
{
  delete[] name;
  name = nullptr;

  delete[] archetype;
  archetype = nullptr;
  std::cout << "Cleaned up.\n";
}

void GameCharacter::displayCharacterDetails() const
{
  std::cout << "Name: " << name << '\n';
  std::cout << "Archetype: " << archetype << '\n';
  std::cout << "HP: " << healthPoints << '\n';
  std::cout << "MP: " << magicPower << '\n';
  std::cout << "Level: " << level << '\n';
}


void GameCharacter::takeDamage(int damage)
{
  healthPoints -= damage;
}

void GameCharacter::levelUp()
{
  level += 1;
}
