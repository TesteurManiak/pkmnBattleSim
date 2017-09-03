//
// Trainer.hpp for trainer in /home/guillaume2.roux/Perso/PkmnGame/include/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sat Sep  2 22:48:02 2017 Guillaume Roux
// Last update Sun Sep  3 15:09:17 2017 Guillaume Roux
//

#ifndef TRAINER_HPP
# define TRAINER_HPP

# include <iostream>
# include "APokemon.hpp"

class Trainer
{
private:
  std::string _name;
  Pokemon _pkmn[6];

public:
  Trainer(std::string const name) {
    this->_name = name;
  };
  virtual ~Trainer(){};

  Pokemon & getPokmn(int pos) {
    return this->_pkmn[pos];
  };

  void  addPkmn(Pokemon const & pkmn) {
    for (int i = 0; i < 6; i++) {
      Pokemon *tmp = &(this->_pkmn[i]);
      if (tmp != NULL) {
          *tmp = pkmn;
          std::cout << pkmn.getName() << " is added to your party !" << std::endl;
          return;
        }
    }
    std::cout << "Your party is full !" << std::endl;
  };
};

#endif
