#ifndef ATTACK_HPP
# define ATTACK_HPP

# include <iostream>

class Attack
{
protected:
  std::string _name;
  std::string _type;
  std::string _touch;
  std::string _effect;
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

  virtual std::string getType() const {
    return this->_type;
  };

  virtual std::string getTouch() const {
    return this->_touch;
  }

  virtual std::string getEffect() const {
    return this->_effect;
  }

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
