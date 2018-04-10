#ifndef POKEMON_HPP
# define POKEMON_HPP

# include <iostream>
# include <list>
# include "AAttack.hpp"
# include "AObject.hpp"
# include "AAbility.hpp"

# define BASE_LEVEL 50

enum State {
  None,
  Burn,
  Poisonned,
  Paralyzed,
  Sleep
 };

class Pokemon
{
protected:
  std::string _name;
  Type _type1;
  Type _type2;

  int _pokedexNumber;
  int _level;
  int _hp;
  int _atk;
  int _def;
  int _spAtk;
  int _spDef;
  int _speed;
  int _EV;
  int _IV;
  State _state;
  bool _confused;

  Object  _obj;
  Ability _talent;
  std::list<Attack> _attacks;
public:
  virtual ~Pokemon(){};

  // GET
  virtual std::string getName() const { return this->_name; };
  virtual Type getType1() const { return this->_type1; };
  virtual Type getType2() const { return this->_type2; };
  virtual int getPokedexNum() const { return this->_pokedexNumber; };
  virtual int getLevel() const { return this->_level; };
  virtual int getHp() const { return this->_hp; };
  virtual int getAtk() const { return this->_atk; };
  virtual int getDef() const { return this->_def; };
  virtual int getSpAtk() const { return this->_spAtk; };
  virtual int getSpDef() const { return this->_spDef; };
  virtual int getSpeed() const { return this->_speed; };
  virtual std::list<Attack> getAttacks() const { return this->_attacks; };
  virtual int getIV() const { return this->_IV; }
  virtual int getEV() const { return this->_EV; }
  virtual State getState() const { return this->_state; };
  virtual bool isConfused() { return this->_confused; };

  // SET
  virtual void setName(std::string const &name) { this->_name = name; };
  virtual void setType1(Type type) { this->_type1 = type; };
  virtual void setType2(Type type) { this->_type2 = type; };
  virtual void setPokedexNum(int num) { this->_pokedexNumber = num; };
  virtual void setLevel(int lvl) { this->_level = lvl; };
  virtual void setHp(int hp) { this->_hp = hp; };
  virtual void setAtk(int atk) { this->_atk = atk; };
  virtual void setDef(int def) { this->_def = def; };
  virtual void setSpAtk(int spAtk) { this->_spAtk = spAtk; };
  virtual void setSpDef(int spDef) { this->_spDef = spDef; };
  virtual void setSpeed(int speed) { this->_speed = speed; };
  virtual void setIV(int IV) { this->_IV = IV; };
  virtual void setEV(int EV) { this->_EV = EV; };
  virtual void setState(State state) { this->_state = state; };
  virtual void setConfusion(bool confuse) { this->_confused = confuse; };

  // ACTION
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
