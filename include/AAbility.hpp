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
