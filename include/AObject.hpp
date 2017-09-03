//
// AObject.hpp for object in /home/guillaume2.roux/Perso/PkmnGame/include/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Sat Sep  2 23:02:35 2017 Guillaume Roux
// Last update Sat Sep  2 23:05:52 2017 Guillaume Roux
//

#ifndef AOBJECT_HPP
# define AOBJECT_HPP

# include <iostream>

class Object
{
private:
  std::string _name;

public:
  virtual ~Object(){};
};

#endif
