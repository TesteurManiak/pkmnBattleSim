//
// Pkmn.hpp for pkmn in /home/guillaume2.roux/Perso/PkmnGame/include/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sun Sep  3 12:58:41 2017 Guillaume Roux
// Last update Sun Sep  3 16:08:41 2017 Guillaume Roux
//

#ifndef PKMN_HPP
# define PKMN_HPP

# include <iostream>
# include "APokemon.hpp"
# include "Attacks.hpp"

class Charmander : public Pokemon
{
public:
  Charmander()
  {
    this->_name = "Charmander";
    this->_type1 = "Fire";
    this->_pokedexNumber = 4;
    this->_level = BASE_LEVEL;
    this->_hp = 99;
    this->_atk = 51;
    this->_def = 43;
    this->_spAtk = 58;
    this->_spDef = 49;
    this->_speed = 63;
    this->_attack1 = ember;
  };
  virtual ~Charmander(){};
};
Charmander charmander;

class Charmeleon : public Pokemon
{
public:
  Charmeleon() {
    this->_name = "Charmander";
    this->_type1 = "Fire";
    this->_pokedexNumber = 5;
    this->_level = BASE_LEVEL;
    this->_hp = 118;
    this->_atk = 62;
    this->_def = 56;
    this->_spAtk = 76;
    this->_spDef = 63;
    this->_speed = 76;
    this->_attack1 = ember;
  };
  virtual ~Charmeleon(){};
};
Charmeleon  charmeleon;

class Charizard : public Pokemon
{
public:
  Charizard() {
    this->_name = "Charizard";
    this->_type1 = "Fire";
    this->_type2 = "Fly";
    this->_pokedexNumber = 6;
    this->_level = BASE_LEVEL;
    this->_hp = 138;
    this->_atk = 80;
    this->_def = 74;
    this->_spAtk = 102;
    this->_spDef = 81;
    this->_speed = 84;
    this->_attack1 = ember;
  };
  virtual ~Charizard(){};
};
Charizard charizard;

#endif
