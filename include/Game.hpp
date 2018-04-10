#ifndef GAME_HPP_
#define GAME_HPP_

#include <iostream>
#include <string>

class Game {
public:
  Game () {};
  virtual ~Game () {};
  void chooseName();
  void cmdManagement();
};

#endif
