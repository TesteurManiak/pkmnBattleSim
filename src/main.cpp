//
// main.cpp for main in /home/guillaume2.roux/Perso/PkmnGame/src/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sat Sep  2 22:35:44 2017 Guillaume Roux
// Last update Mon Sep  4 19:19:10 2017 Guillaume Roux
//

#include "../include/my.hpp"

void  chooseName()
{
  std::string name = "";

  while (name == "")
  {
    std::cout << "Please choose a trainer name :" << std::endl;
    std::cin >> name;
  }
  player.setName(name);
  std::cout << "Welcome player : " << player.getName() << std::endl;
}

void  cmdManagement()
{
  std::string cmd;

  while (cmd != "quit")
  {
    std::cin >> cmd;
    if (cmd == "help")
      std::cout << HELP_MSG << std::endl;
    else if (cmd.compare(0, 5, "addpkmn") == 0)
      player.addPkmn(charmeleon);
    else if (cmd == "pkmnlist")
      std::cout << PKMN_LIST << std::endl;
    else if (cmd == "quit")
      cmdQuit();
    else
      std::cout << "Unknown command !" << std::endl;
  }
}

int main()
{
  Charmander  opponent;

  chooseName();
  cmdManagement();
  //player.addPkmn(bulbasaur);
  //player.getPokmn(0).attack(opponent, player.getPokmn(0).getAttack1());
  return 0;
}
