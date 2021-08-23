#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int n, std::string name) {
	Zombie *zombie	= new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		zombie[i].giveName(name + " " + std::to_string(i));
		zombie[i].announce();
	}
	return zombie;
}
