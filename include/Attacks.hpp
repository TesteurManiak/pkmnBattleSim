//
// Attacks.hpp for Attacks in /home/guillaume2.roux/Perso/PkmnGame/include/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sat Sep  2 23:12:15 2017 Guillaume Roux
// Last update Sun Sep  3 16:03:40 2017 Guillaume Roux
//

#ifndef ATTACKS_HPP
# define ATTACKS_HPP

# include <iostream>
# include "AAttack.hpp"

class Ember : public Attack
{
public:
  Ember()
  {
    this->_name = "Ember";
    this->_power = 40;
    this->_accuracy = 100;
    this->_maxPP = 25;
    this->_currentPP = this->_maxPP;
  };
  virtual ~Ember(){};
};
Ember ember;

#endif
