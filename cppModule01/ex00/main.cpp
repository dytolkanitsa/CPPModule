#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Kaneki = NULL;
	Zombie	*Davlet = NULL;

	Davlet = Davlet->newZombie("Davlet");
	delete Davlet;
	Kaneki->randomChump("Kaneki");
	delete Kaneki;
}
