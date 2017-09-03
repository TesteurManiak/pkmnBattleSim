//
// Attack.hpp for Attack in /home/guillaume2.roux/Perso/PkmnGame/include/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sat Sep  2 22:44:53 2017 Guillaume Roux
// Last update Sun Sep  3 15:58:01 2017 Guillaume Roux
//

#ifndef ATTACK_HPP
# define ATTACK_HPP

# include <iostream>

class Attack
{
protected:
  std::string _name;
  int _power;
  int _accuracy;
  int _maxPP;
  int _currentPP;

public:
  virtual ~Attack(){};

  virtual std::string getName() const {
    return this->_name;
  };

  virtual int getPower() const {
    return this->_power;
  };

  virtual int getAcc() const {
    return this->_accuracy;
  };

  virtual int getMaxPP() const {
    return this->_maxPP;
  };

  virtual int getCurrPP() const {
    return this->_currentPP;
  };

  virtual Attack & operator=(Attack const &copy)
  {
    this->_name = copy.getName();
    this->_power = copy.getPower();
    this->_accuracy = copy.getAcc();
    this->_maxPP = copy.getMaxPP();
    this->_currentPP = copy.getCurrPP();
    return *this;
  };
};

#endif
