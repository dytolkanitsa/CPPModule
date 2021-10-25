#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal& operator=(const WrongAnimal &animal);
	void makeSound() const;
	virtual std::string getType() const;
};
#endif