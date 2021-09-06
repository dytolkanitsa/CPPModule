#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>

class ThereIsNoSuchElement : public std::exception
{
	const char* what() const throw()
	{
		return "There is no such element";
	}
};

template<typename T>
int easyFind(T &arr, int i)
{
	typename T::const_iterator iter;
	iter = find(arr.begin(), arr.end(), i);
	if (iter == arr.end())
		throw::ThereIsNoSuchElement();
	return *iter;
}
#endif