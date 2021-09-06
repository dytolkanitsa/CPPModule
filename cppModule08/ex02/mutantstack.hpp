#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() : std::stack<T>(){};
	~MutantStack() {};
	MutantStack(const MutantStack &copy) : std::stack<T>(copy){};
	MutantStack& operator=(const MutantStack &other) 
	{
		if (this == &other)
			return *this;
		std::stack<T>::operator=(other);
		return *this;
	};

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	iterator end()
	{
		return std::stack<T>::c.end();
	}
};

#endif