#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>

class Span
{
private:
	unsigned int N;
	std::vector<int> myVector;
public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span &copy);
	Span& operator=(const Span &other);
	void	addNumber(int nbr);
	int	shortestSpan();
	int	longestSpan();
	std::vector<int>	getVector();

	class NotEnoughtElements : public std::exception
	{
		const char* what() const throw();
	};

	class CantPutMore : public std::exception
	{
		const char* what() const throw();
	};
};

#endif