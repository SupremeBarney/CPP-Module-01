#ifndef HUMAN_A
# define HUMAN_A

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon	&_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA( void );

	void	attack( void );
};


#endif
