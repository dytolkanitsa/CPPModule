#include "Animal.hpp"
#include "AnimalCat.hpp"
#include "AnimalDog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int i = 0; i < 2; i++)
	{
		delete (animals[i]);
	}

	std::cout << "\n_________DeepCopy________" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
}
