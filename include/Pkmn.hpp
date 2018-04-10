#ifndef PKMN_HPP
# define PKMN_HPP

# include <iostream>
# include "APokemon.hpp"
# include "Attacks.hpp"
# include "Var.hpp"

class Bulbasaur : public Pokemon {
public:
  Bulbasaur () {
    this->_name = "Bulbasaur";
    this->_type1 = Grass;
    this->_type2 = Poison;
    this->_pokedexNumber = 1;
    this->_level = BASE_LEVEL;
    this->_hp = 105;
    this->_atk = 48;
    this->_def = 48;
    this->_spAtk = 63;
    this->_spDef = 63;
    this->_speed = 45;
    this->_attacks.push_back(acid);
  };
  virtual ~Bulbasaur (){};
};

class Ivysaur : public Pokemon {
public:
  Ivysaur () {
    this->_name = "Ivysaur";
    this->_type1 = Grass;
    this->_type2 = Poison;
    this->_pokedexNumber = 2;
    this->_level = BASE_LEVEL;
    this->_hp = 120;
    this->_atk = 60;
    this->_def = 61;
    this->_spAtk = 76;
    this->_spDef = 76;
    this->_speed = 58;
    this->_attacks.push_back(acid);
  };
  virtual ~Ivysaur (){};
};

class Charmander : public Pokemon
{
public:
  Charmander()
  {
    this->_name = "Charmander";
    this->_type1 = Fire;
    this->_pokedexNumber = 4;
    this->_level = BASE_LEVEL;
    this->_hp = 99;
    this->_atk = 51;
    this->_def = 43;
    this->_spAtk = 58;
    this->_spDef = 49;
    this->_speed = 63;
    this->_attacks.push_back(ember);
  };
  virtual ~Charmander(){};
};

class Charmeleon : public Pokemon
{
public:
  Charmeleon() {
    this->_name = "Charmeleon";
    this->_type1 = Fire;
    this->_pokedexNumber = 5;
    this->_level = BASE_LEVEL;
    this->_hp = 118;
    this->_atk = 62;
    this->_def = 56;
    this->_spAtk = 76;
    this->_spDef = 63;
    this->_speed = 76;
    this->_attacks.push_back(ember);
  };
  virtual ~Charmeleon(){};
};

class Charizard : public Pokemon
{
public:
  Charizard() {
    this->_name = "Charizard";
    this->_type1 = Fire;
    this->_type2 = Fly;
    this->_pokedexNumber = 6;
    this->_level = BASE_LEVEL;
    this->_hp = 138;
    this->_atk = 80;
    this->_def = 74;
    this->_spAtk = 102;
    this->_spDef = 81;
    this->_speed = 84;
    this->_attacks.push_back(ember);
  };
  virtual ~Charizard(){};
};

// CREATE POKEMON
Bulbasaur bulbasaur;
Ivysaur ivysaur;
Charmander charmander;
Charmeleon  charmeleon;
Charizard charizard;

#endif
