#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default consructor called" << std::endl;
	_fixpointValue = 0;
}

Fixed::Fixed(int parametr) {
	std::cout << "Int constructor called" << std::endl;
	_fixpointValue = parametr << bit;
}

Fixed::Fixed(float parametr) {
	std::cout << "Float constructor called" << std::endl;
	_fixpointValue = roundf(parametr * (1 << bit));
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	_fixpointValue = copy._fixpointValue;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return *this;
	_fixpointValue = fixed._fixpointValue;
	return *this;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixpointValue);
}

void Fixed::setRawBits(int const raw) {
	_fixpointValue = raw;
}

float	Fixed::toFloat(void) const {
	return (float)_fixpointValue / (float)(1 << bit);
}

int	Fixed::toInt(void) const {
	return _fixpointValue >> bit;
}

std::ostream& operator<<(std::ostream& out, const Fixed &fixed) {
	return out << fixed.toFloat();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
