#include "span.hpp"

int main()
{
	std::cout << "____5 numbers____" << std::endl << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& ex)
	{
		std::cerr << ex.what() << '\n';
	}
	
	std::cout << "____100 numbers____" << std::endl << std::endl;
	try
	{
		Span sp1 = Span(100);
		for (int count = 0; count < 100; ++count)
		{
			sp1.addNumber(rand());
		}
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& ex)
	{
		std::cerr << ex.what() << '\n';
	}

	std::cout << "____10000 numbers____" << std::endl << std::endl;
	try
	{
		Span sp1 = Span(10000);
		for (int count = 0; count < 10000; ++count)
		{
			sp1.addNumber(rand());
		}
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& ex)
	{
		std::cerr << ex.what() << '\n';
	}
}