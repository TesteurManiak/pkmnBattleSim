#ifndef ATTACK_HPP
# define ATTACK_HPP

# include <iostream>
# include "Var.hpp"

enum TouchType {
  None,
  Physical,
  Special
 };

class Attack
{
protected:
  std::string _name;
  Type _type;
  TouchType _touch;
  std::string _effect;
  int _power;
  int _accuracy;
  int _maxPP;
  int _currentPP;
  float _chancesOfEffect;
  int _priority;

public:
  virtual ~Attack(){};

  // GET
  virtual std::string getName() const { return this->_name; };
  virtual int getPower() const { return this->_power; };
  virtual int getAcc() const { return this->_accuracy; };
  virtual int getMaxPP() const { return this->_maxPP; };
  virtual int getCurrPP() const { return this->_currentPP; };
  virtual Type getType() const { return this->_type; };
  virtual TouchType getTouch() const { return this->_touch; };
  virtual std::string getEffect() const { return this->_effect; };
  virtual int getPriority() const { return this->_priority; };
  virtual float getChanceOfEffect() const { return this->_chancesOfEffect; };

  // SET
  virtual void setName(std::string const name) { this->_name = name; };
  virtual void setPower(int power) { this->_power = power; };
  virtual void setAcc(int acc) { this->_accuracy = acc; };
  virtual void setMaxPP(int maxPP) { this->_maxPP = maxPP; };
  virtual void setCurrPP(int curr) { this->_currentPP = curr; };
  virtual void setType(Type type) { this->_type = type; };
  virtual void setTouch(std::string const & touch) { this->_touch = touch; };
  virtual void setEffect(std::string const & effect) { this->_effect = effect; };
  virtual void setPriority(int prio) { this->_priority = prio; };
  virtual void setChancesOfEffect(float chance) { this->_chancesOfEffect = chance; };

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

std::ostream  &operator<<(std::ostream & os, Attack const & obj)
{
  return os << obj.getEffect() << std::endl;
}

#endif
