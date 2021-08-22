#include "Zombie.hpp"

int	main(void)
{
	Zombie	*moarZombies;

	moarZombies = NULL;
	moarZombies = 	moarZombies->zombieHorde(10, "Zombies");
	delete [] moarZombies;
}