#include "easyfind.hpp"
#include <vector>

int main(void)
{
	try
	{
		std::vector<int> myVector;
		for (int count = 0; count < 10; ++count)
		{
			myVector.push_back(count);
		}
		
		std::cout << easyFind(myVector, 9) << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}

	try
	{
		std::vector<int> myVector2;
		for (int count = 0; count < 10; ++count)
		{
			myVector2.push_back(count);
		}
		std::cout << easyFind(myVector2, 100) << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}

}
