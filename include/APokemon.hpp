#ifndef POKEMON_HPP
# define POKEMON_HPP

# include <iostream>
# include <list>
# include "AAttack.hpp"
# include "AObject.hpp"
# include "AAbility.hpp"

# define BASE_LEVEL 50

class Pokemon
{
protected:
  std::string _name;
  std::string _type1;
  std::string _type2;

  size_t _pokedexNumber;
  int _level;
  int _hp;
  int _atk;
  int _def;
  int _spAtk;
  int _spDef;
  int _speed;

  Object  _obj;
  Ability _talent;
  std::list<Attack> _attacks;
public:
  virtual ~Pokemon(){};

  virtual std::string getName() const {
    return this->_name;
  };

  virtual std::string getType1() const {
    return this->_type1;
  };

  virtual std::string getType2() const {
    return this->_type2;
  };

  virtual size_t getPokedexNum() const {
    return this->_pokedexNumber;
  };

  virtual int getLevel() const {
    return this->_level;
  };

  virtual int getHp() const {
    return this->_hp;
  };

  virtual int getAtk() const {
    return this->_atk;
  };

  virtual int getDef() const {
    return this->_def;
  };

  virtual int getSpAtk() const {
    return this->_spAtk;
  };

  virtual int getSpDef() const {
    return this->_spDef;
  };

  virtual int getSpeed() const {
    return this->_speed;
  };

  virtual std::list<Attack> getAttacks() const {
    return this->_attacks;
  };

  virtual void	attack(Pokemon &target, Attack const &atkName) {
    (void)target;
    std::cout << this->_name << " uses " << atkName.getName() << std::endl;
  };

  //virtual void  takeDmg(int dmg);

  virtual Pokemon & operator=(Pokemon const &copy) {
    this->_name = copy.getName();
    this->_type1 = copy.getType1();
    this->_type2 = copy.getType2();
    this->_pokedexNumber = copy.getPokedexNum();
    this->_level = copy.getLevel();
    this->_hp = copy.getLevel();
    this->_atk = copy.getAtk();
    this->_def = copy.getDef();
    this->_spAtk = copy.getSpAtk();
    this->_spDef = copy.getSpDef();
    this->_speed = copy.getSpeed();
    this->_attacks = copy.getAttacks();
    return *this;
  };

  virtual bool  operator==(Pokemon const & obj) const {
    if (this->_name == obj.getName())
      return true;
    return false;
  };

  virtual bool  operator==(size_t const & val) const {
    if (this->getPokedexNum() == val)
      return true;
    return false;
  };

  virtual bool  operator!=(Pokemon const & obj) const{
    return !(*this == obj);
  };

	virtual bool operator!=(size_t const & val) const {
    return !(*this == val);
  };
};

#endif
