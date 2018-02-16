#include "../include/my.hpp"

void start_battle()
{
  Charmander opponent;

  player.getPokmn(0).attack(opponent, player.getPokmn(0).getAttacks().front());
}

void  chooseName()
{
  std::string name = "";

  while (name == "" || name[0] == '\0') {
    std::cout << "Please choose a trainer name: ";
    std::cin >> name;
  }
  player.setName(name);
  std::cout << "Welcome player : " << player.getName() << std::endl << "Use the command 'help' to display the command list." << std::endl;
}

void  cmdManagement()
{
  std::string cmd;

  while (cmd != "quit")
  {
    std::cin >> cmd;
    if (cmd == "help")
      std::cout << HELP_MSG << std::endl;
    else if (strncmp(cmd.c_str(), "addpkmn ", 7) == 0)
      player.addPkmn(charmeleon);
    else if (cmd == "pkmnlist")
      std::cout << PKMN_LIST << std::endl;
    else if (cmd == "battle") {
        if (player.getPokmn().size() != 0)
          start_battle();
        else
          std::cout << "Error: You need at least 1 Pokemon" << '\n';
    }
  }
}

int main()
{
  chooseName();
  cmdManagement();
  return 0;
}
