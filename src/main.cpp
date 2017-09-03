//
// main.cpp for main in /home/guillaume2.roux/Perso/PkmnGame/src/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sat Sep  2 22:35:44 2017 Guillaume Roux
// Last update Sun Sep  3 16:08:19 2017 Guillaume Roux
//

#include <iostream>
#include "../include/Pkmn.hpp"
#include "../include/Trainer.hpp"

int main()
{
  Charmander  opponent;
  Trainer ash("Ash");

  ash.addPkmn(charizard);
  ash.getPokmn(0).attack(opponent, ash.getPokmn(0).getAttack1());
  return 0;
}
