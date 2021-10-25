#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default consructor called" << std::endl;
	_fixpointValue = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	_fixpointValue = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return *this;
	_fixpointValue = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixpointValue);
}

void Fixed::setRawBits(int const raw) {
	_fixpointValue = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
