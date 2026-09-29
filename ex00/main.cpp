#include "Zombie.hpp"

int	main( void )
{
	Zombie	*z;

	randomChump("Alexy");
	z = newZombie("Barney");
	z->announce();
	delete z;
}
