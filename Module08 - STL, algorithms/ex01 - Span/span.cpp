#include "span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span& Span::operator=(const Span &other)
{
	this->N = other.N;
	this->myVector = other.myVector;
	return *this;
}

void	Span::addNumber(int nbr)
{
	if (myVector.size() < N)
	{
		myVector.push_back(nbr);
	}
	else
		Span::CantPutMore();
}

int	Span::shortestSpan()
{
	int res;
	if (myVector.size() < 2)
		throw Span::NotEnoughtElements();
	
	std::vector<int> tmp = myVector;

	sort(tmp.begin(), tmp.end());
	res = tmp[1] - tmp[0];
	return res;
}

int	Span::longestSpan()
{
	int res;
	if (myVector.size() < 2)
		throw Span::NotEnoughtElements();
	
	std::vector<int> tmp = myVector;
	sort(tmp.begin(), tmp.end());
	res = tmp[tmp.size() - 1] - tmp[0];
	return res;
}

const char* Span::NotEnoughtElements::what() const throw()
{
	return "Not enought elements";
}

const char* Span::CantPutMore::what() const throw()
{
	return "There is already enought elements!";
}

std::vector<int>	Span::getVector()
{
	return this->myVector;
}