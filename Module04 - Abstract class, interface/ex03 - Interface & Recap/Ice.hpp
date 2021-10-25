#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string type;

public:
	Ice();
	~Ice();
	Ice& operator=(const Ice &ice);
	Ice(Ice const &copy);
	AMateria* clone() const;
	void use(ICharacter& target);
};
#endif