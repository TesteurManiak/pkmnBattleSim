#include "../include/my.hpp"

void start_battle()
{
  Charmander opponent;

  player.getPokmn(0).attack(opponent, player.getPokmn(0).getAttacks().front());
}

int main()
{
  Game my_game;

  my_game.chooseName();
  my_game.cmdManagement();
  return 0;
}
