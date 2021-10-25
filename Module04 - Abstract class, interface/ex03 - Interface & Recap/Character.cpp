#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = NULL;
	}
}

Character::Character(std::string _name) : name(_name)
{
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] != NULL)
			delete materia[i];
	}
}

Character& Character::operator=(const Character &character)
{
	if (this == &character)
		return *this;
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		if (character.materia[i])
			this->materia[i] = character.materia[i]->clone();
	}
	return *this;
}

Character::Character(Character const &copy)
{
	*this = copy;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m) // экипировка
{
	for (int i = 0; i < 4; i++) 
	{
		if (!this->materia[i]) 
		{
			materia[i] = m;
			return ;
		}
	}
	std::cout << "The inventory is full!\n";
}

void Character::unequip(int idx) // разэкипировка
{
	if (this->materia[idx])
		materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) // юзззз
{
	if (this->materia[idx])
		materia[idx]->use(target);
}