#include "ClpTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Arseniy");

	clapTrap.attack("Gena");
	clapTrap.takeDamage(2);
	clapTrap.beRepaired(3);
}