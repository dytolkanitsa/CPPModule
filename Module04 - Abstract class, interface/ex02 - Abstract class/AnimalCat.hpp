#ifndef ANIMALCAT_H
# define ANIMALCAT_H

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &copy);
	Cat& operator=(const Cat &cat);
	void makeSound() const;
	std::string getType() const;
};
#endif