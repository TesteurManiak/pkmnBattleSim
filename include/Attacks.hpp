//
// Attacks.hpp for Attacks in /home/guillaume2.roux/Perso/PkmnGame/include/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sat Sep  2 23:12:15 2017 Guillaume Roux
// Last update Sun Sep  3 16:34:37 2017 Guillaume Roux
//

#ifndef ATTACKS_HPP
# define ATTACKS_HPP

# include <iostream>
# include "AAttack.hpp"

class Ember : public Attack {
public:
  Ember()
  {
    this->_name = "Ember";
    this->_type = "Fire";
    this->_touch = "special";
    this->_effect = "";
    this->_power = 40;
    this->_accuracy = 100;
    this->_maxPP = 25;
    this->_currentPP = this->_maxPP;
  };
  virtual ~Ember(){};
};
Ember ember;

class Absorb : public Attack {
public:
  Absorb() {
    this->_name = "Absorb";
    this->_type = "Grass";
    this->_touch = "special";
    this->_effect = "User recovers half the HP inflicted on opponent.";
    this->_power = 20;
    this->_accuracy = 100;
    this->_maxPP = 25;
    this->_currentPP = this->_maxPP;
  };
  virtual ~Absorb (){};
};
Absorb  absorb;

class Accelerock : public Attack {
public:
  Accelerock () {
    this->_name = "Accelerock";
    this->_type = "Rock";
    this->_touch = "physical";
    this->_effect = "User attacks first.";
    this->_power = 40;
    this->_accuracy = 100;
    this->_maxPP = 20;
    this->_currentPP = this->_maxPP;
  };
  virtual ~Accelerock (){};
};
Accelerock  accelerock;

class Acid : public Attack {
public:
  Acid () {
    this->_name = "Acid";
    this->_type = "Poison";
    this->_touch = "special";
    this->_effect = "May lower opponent's Special Defense.";
    this->_power = 40;
    this->_accuracy = 100;
    this->_maxPP = 30;
    this->_currentPP = this->_maxPP;
  };
  virtual ~Acid (){};
};
Acid  acid;

#endif
