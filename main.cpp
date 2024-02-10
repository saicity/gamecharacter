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
  GameCharacter Makoto("Makoto", 100, 10);

  //Showing stats for Makoto at level 10 and full hp
  Makoto.displayCharacterDetails();

  //Simulating a fight with 5 turns.
  Makoto.takeDamage(10);
  Makoto.takeDamage(10);
  Makoto.takeDamage(10);
  Makoto.takeDamage(10);
  Makoto.takeDamage(10);
  Makoto.levelUp();
  Makoto.displayCharacterDetails();

  return 0;
}
