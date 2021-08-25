#include "ClpTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Arseniy");
	ScavTrap scavTrap("Vitalik");

	clapTrap.attack("Gena");
	scavTrap.attack("Zhora");
	clapTrap.takeDamage(2);
	scavTrap.takeDamage(20);
	clapTrap.beRepaired(3);
	scavTrap.beRepaired(10);

	scavTrap.guardGate();
}