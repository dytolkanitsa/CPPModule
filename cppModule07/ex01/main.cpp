#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void	print(T const &t)
{
	if (t % 2 == 0)
		std::cout << t << " делится на два" << std::endl;
	else
		std::cout << t << " не делится на два" << std::endl;
}

int	main(void)
{
	int mas[] = {1, 2 ,3};
	iter(mas, 3, print);
}