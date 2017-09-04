//
// my.hpp for my in /home/guillaume2.roux/Perso/PkmnGame/include/
//
// Made by Guillaume Roux
// Login   <guillaume2.roux@epitech.eu>
//
// Started on  Mon Sep  4 18:57:11 2017 Guillaume Roux
// Last update Mon Sep  4 19:28:23 2017 Guillaume Roux
//

#ifndef MY_HPP
# define MY_HPP

# define HELP_MSG "COMMAND LIST :\naddpkmn <number>\tadd the pokémon corresponding to the number\npkmnlist\t\tdisplay the pokémon list\nquit\t\t\tquit the program"
# define PKMN_LIST "#1 Bulbasaur\n#2 Ivysaur\n#4 Charmander\n#5 Charmeleon\n#6 Charizard"

# include <iostream>
# include <string>
# include "Attacks.hpp"
# include "Pkmn.hpp"
# include "Trainer.hpp"

void  cmdQuit();

#endif
