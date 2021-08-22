#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string weaponType;

public:
	Weapon();
	~Weapon();

	Weapon(std::string weapon);
	std::string const	&getType(void);
	void	setType(std::string weapon);
};
#endif