#ifndef ANIMALDOG_H
# define ANIMALDOG_H

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog &copy);
	Dog& operator=(const Dog &dog);
	void makeSound() const;
	std::string getType() const;
};
#endif