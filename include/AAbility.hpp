//
// AAbility.hpp for aability in /home/guillaume2.roux/Perso/PkmnGame/include/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sat Sep  2 23:04:12 2017 Guillaume Roux
// Last update Sat Sep  2 23:05:46 2017 Guillaume Roux
//

#ifndef AABILITY_HPP
# define AABILITY_HPP

# include <iostream>

class Ability
{
protected:
  std::string _name;
  std::string _desc;

public:
  virtual ~Ability(){};
};

#endif
