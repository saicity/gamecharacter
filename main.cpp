#include "GameCharacter.h"

int main(void)
{
  //Example A: Default Character
  GameCharacter NPC;
  
  //Showing the default character's stats
  NPC.displayCharacterDetails();

  //Simulating a fight with one turn
  NPC.takeDamage(80);
  NPC.levelUp();
  NPC.displayCharacterDetails();

  //Example B: Initialized Character
  GameCharacter Lance("Lance", "Warrior", 100, 48, 10);

  //Showing stats for Makoto at level 10 and full hp
  Lance.displayCharacterDetails();

  //Simulating a fight with 5 turns.
  Lance.takeDamage(10);
  Lance.takeDamage(10);
  Lance.takeDamage(10);
  Lance.takeDamage(10);
  Lance.takeDamage(10);
  Lance.levelUp();
  Lance.displayCharacterDetails();

  return 0;
}
