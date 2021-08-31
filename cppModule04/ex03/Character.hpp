#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	AMateria	*materia[4];
	std::string	name;

public:
	Character();
	Character(std::string _name);
	~Character();
	Character& operator=(const Character &character);
	Character(Character const &copy);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
#endif