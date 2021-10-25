#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string type;

public:
	Cure();
	~Cure();
	Cure& operator=(const Cure &cure);
	Cure(Cure const &copy);
	AMateria* clone() const;
	void use(ICharacter& target);
};
#endif