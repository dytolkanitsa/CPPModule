#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &copy);
	Animal& operator=(const Animal &animal);
	virtual void makeSound() const = 0;
	virtual std::string getType() const;
};
#endif