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
  virtual ~Absorb(){};
};

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
  virtual ~Accelerock(){};
};

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
  virtual ~Acid(){};
};

// ATTACKS
Ember ember;
Absorb  absorb;
Accelerock  accelerock;
Acid  acid;

#endif
