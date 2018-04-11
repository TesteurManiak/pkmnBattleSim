#ifndef ATTACKS_HPP
# define ATTACKS_HPP

# include <iostream>
# include "AAttack.hpp"

class Ember : public Attack {
public:
  Ember()
  {
    this->_name = "Ember";
    this->_type = Fire;
    this->_touch = Special;
    this->_effect = "The target is attacked with small flames. This may also leave the target with a burn.";
    this->_power = 40;
    this->_accuracy = 100;
    this->_maxPP = 25;
    this->_currentPP = this->_maxPP;
    this->_chancesOfEffect = 10.0;
    this->_priority = 0;
  };
  virtual ~Ember(){};
};

class Absorb : public Attack {
public:
  Absorb() {
    this->_name = "Absorb";
    this->_type = Grass;
    this->_touch = Special;
    this->_effect = "A nutrient-draining attack. The user's HP is restored by half the damage taken by the target.";
    this->_power = 20;
    this->_accuracy = 100;
    this->_maxPP = 25;
    this->_currentPP = this->_maxPP;
    this->_chancesOfEffect = 0.0;
    this->_priority = 0;
  };
  virtual ~Absorb(){};
};

class Accelerock : public Attack {
public:
  Accelerock () {
    this->_name = "Accelerock";
    this->_type = Rock;
    this->_touch = Physical;
    this->_effect = "The user smashes into the target at high speed. This move always goes first.";
    this->_power = 40;
    this->_accuracy = 100;
    this->_maxPP = 20;
    this->_currentPP = this->_maxPP;
    this->_chancesOfEffect = 0.0;
    this->_priority = 1;
  };
  virtual ~Accelerock(){};
};

class Acid : public Attack {
public:
  Acid () {
    this->_name = "Acid";
    this->_type = Poison;
    this->_touch = Special;
    this->_effect = "The opposing Pokémon are attacked with a spray of harsh acid. This may also lower their Sp. Def stat.";
    this->_power = 40;
    this->_accuracy = 100;
    this->_maxPP = 30;
    this->_currentPP = this->_maxPP;
    this->_chancesOfEffect = 33.2;
    this->_priority = 0;
  };
  virtual ~Acid(){};
};

class Pound : public Attack {
public:
  Pound () {
    this->_name = "Pound";
    this->_type = Normal;
    this->_touch = Special;
    this->_effect = "The target is physically pounded with a long tail, a foreleg, or the like.";
    this->_power = 40;
    this->_accuracy = 100;
    this->_maxPP = 35;
    this->_currentPP = this->_maxPP;
    this->_chancesOfEffect = 0.0;
    this->_priority = 0;
  };
  virtual Pound(){};
};

class KarateChop {
public:
  KarateChop () {
    this->_name = "Karate Chop";
    this->_type = Fighting;
    this->_touch = Physical;
    this->_effect = " The target is attacked with a sharp chop. Critical hits land more easily.";
    this->_power = 50;
    this->_accuracy = 100;
    this->_maxPP = 25;
    this->_currentPP = this->_maxPP;
    this->_chancesOfEffect = 0.0;
    this->_priority = 0;
  };
  virtual ~KarateChop (){};
};

// CREATE ATTACKS
Ember ember;
Absorb  absorb;
Accelerock  accelerock;
Acid  acid;
Pound pound;
KarateChop karatechop;

#endif
