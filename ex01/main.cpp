#include "Zombie.hpp"

int	main( void )
{
	Zombie	*z;
	int		n;

	n = 5;
	z = zombieHorde(n, "Barney");
	for (int i = 0; i < n; i++)
		z[i].announce();
	delete[] z;
}
