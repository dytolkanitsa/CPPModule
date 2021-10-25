#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int n, std::string name) {
	if (n < 0)
	{
		std::cout << "It can't be less then zero!" << std::endl;
		return NULL;
	}
	Zombie *zombies	= new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		zombies[i].setName(name + " " + std::to_string(i));
		zombies[i].announce();
	}
	return zombies;
}
