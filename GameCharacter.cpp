#define _CRT_SECURE_NO_WARNINGS
#include "GameCharacter.h"

GameCharacter::GameCharacter() : healthPoints(100), level(1)
{
  //The default name is player which is why it's here
  this->name = new char[7];

  //Validating if the name was allocated properly
  if (this->name != nullptr)
  {
    std::strcpy(this->name, "Player");
  }
  else
  {
    std::cout << "Memory not allocated for default name";
    this->name = nullptr;
  }
}

GameCharacter::GameCharacter(const char* name, int healthPoints, int level)
{
  //Names usually aren't past 20
  this->name = new char[20];
  
  //Validating if the name was allocated properly
  if (this->name != nullptr)
  {
    if (std::strlen(name) < 20)
    {
      std::strcpy(this->name, name);
    }
    else
    {
      std::cout << "Name is greater than 20 characters long.\n";
    }
  }
  else
  {
    std::cout << "Memory was not allocated properly for the name.\n";
    this->name = nullptr;
  }

  this->healthPoints = healthPoints;

  this->level = level;
}

GameCharacter::~GameCharacter()
{
  std::cout << "Cleaned up.\n";
}

void GameCharacter::displayCharacterDetails() const
{
  std::cout << "Name: " << this->name << '\n';
  std::cout << "HP: " << this->healthPoints << '\n';
  std::cout << "Level: " << this->level << '\n';
}


void GameCharacter::takeDamage(int damage)
{
  this->healthPoints -= damage;
}

void GameCharacter::levelUp()
{
  this->level += 1;
}
