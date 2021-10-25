#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat& operator=(const WrongCat &cat);
	void makeSound() const;
	std::string getType() const;
};
#endif