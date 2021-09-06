#include <iostream>
#include "whatever.hpp"

class Awesome
{

public:
	Awesome (int n): _n(n) {};

	bool	operator>(const Fixed &fixed) {return this->i > fixed.i;};
	bool	operator<(const Fixed &fixed) {return this->i < fixed.i;};
	bool	operator>=(const Fixed &fixed) {return this->i >= fixed.i;};
	bool	operator<=(const Fixed &fixed) {return this->i <= fixed.i;};
	bool	operator==(const Fixed &fixed) {return this->i == fixed.i;};
	bool	operator!=(const Fixed &fixed) {return this->i != fixed.i;};

private:
	int _n;
};

int main(void)
{
	int a = 1;
	int b = 10;

	::swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "abcd";
	std::string d = "zxcv";

	::swap(c, d);
	std::cout << "c: " << c << " d: " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	double e = 1.0;
	double f = 10.0;

	::swap(e, f);
	std::cout << "e: " << e << " f: " << f << std::endl;
	std::cout << "max( e, f ) = " << ::min(e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;


	Fixed fixed_1(1);
	Fixed fixed_2(10);
	std::cout << "fixed_1: " << fixed_1.getNbr() << " fixed_2: " << fixed_2.getNbr() << std::endl;
	std::cout << "max( fixed_1, fixed_2 ) = " << ::min(fixed_1, fixed_2).getNbr() << std::endl;
	std::cout << "max( fixed_1, fixed_2 ) = " << ::max(fixed_1, fixed_2).getNbr() << std::endl;

	return (0);
}