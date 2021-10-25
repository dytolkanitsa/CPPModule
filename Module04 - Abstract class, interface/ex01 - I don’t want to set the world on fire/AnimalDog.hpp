#ifndef ANIMALDOG_H
# define ANIMALDOG_H

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	~Dog();
	Dog(const Dog &copy);
	Dog& operator=(const Dog &dog);
	void makeSound() const;
	std::string getType() const;
};
#endif