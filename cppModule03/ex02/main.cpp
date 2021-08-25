#include "ClpTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Arseniy");
	ScavTrap scavTrap("Vitalik");
	FragTrap fragTrap("TheThirdOne");

	clapTrap.attack("Gena");
	scavTrap.attack("Zhora");
	fragTrap.attack("TheFourthOne");

	clapTrap.takeDamage(2);
	scavTrap.takeDamage(20);
	fragTrap.takeDamage(30);
	clapTrap.beRepaired(3);
	scavTrap.beRepaired(10);
	fragTrap.beRepaired(100);

	fragTrap.highFivesGuys();
}
