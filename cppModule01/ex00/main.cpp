#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Davlet;
	Zombie	*Kaneki;

	Davlet = NULL;
	Kaneki = NULL;
	Davlet = Davlet->newZombie("Davlet");
	delete Davlet;
	Kaneki->randomChump("Kaneki");
	delete Kaneki;
}