#include <iostream>
#include "whatever.hpp"

class Awesome
{

public:
	Awesome (int n): _n(n) {};

	bool	operator==(Awesome const &rhs) {return (this->_n == rhs._n); }
	bool	operator!=(Awesome const &rhs) {return (this->_n != rhs._n); }
	bool	operator>(Awesome const &rhs) {return (this->_n > rhs._n); }
	bool	operator<(Awesome const &rhs) {return (this->_n < rhs._n); }
	bool	operator>=(Awesome const &rhs) {return (this->_n >= rhs._n); }
	bool	operator<=(Awesome const &rhs) {return (this->_n <= rhs._n); }
	int	getNbr() {return _n;};
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


	Awesome awesome_1(1);
	Awesome awesome_2(10);
	std::cout << "awesome_1: " << awesome_1.getNbr() << " awesome_2: " << awesome_2.getNbr() << std::endl;
	std::cout << "max( awesome_1, awesome_2 ) = " << ::min(awesome_1, awesome_2).getNbr() << std::endl;
	std::cout << "max( awesome_1, awesome_2 ) = " << ::max(awesome_1, awesome_2).getNbr() << std::endl;

	return (0);
}