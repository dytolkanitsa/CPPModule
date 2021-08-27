#include "Fixed.hpp"

Fixed::Fixed(void) {
	_fixpointValue = 0;
}

Fixed::Fixed(int parametr) {
	_fixpointValue = parametr << bit;
}

Fixed::Fixed(float parametr) {
	_fixpointValue = roundf(parametr * (1 << bit));
}

Fixed::Fixed(const Fixed &copy) {
	_fixpointValue = copy._fixpointValue;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	if (this == &fixed)
		return *this;
	_fixpointValue = fixed._fixpointValue;
	return *this;
}

int	Fixed::getRawBits(void) const {
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
}

Fixed	Fixed::operator-(const Fixed &fixed) {
	return _fixpointValue - fixed._fixpointValue;
}

Fixed	Fixed::operator+(const Fixed &fixed) {
	return _fixpointValue + fixed._fixpointValue;
}
// префикс
Fixed&	Fixed::operator++(void) {
		++_fixpointValue;
	return *this;
}
// префикс
Fixed&	Fixed::operator--(void) {
	--_fixpointValue;
	return *this;
}
// постфикс
Fixed	Fixed::operator++(int) {
	Fixed tmp(_fixpointValue);
	++(*this);
	return *this;
}
// постфикс
Fixed	Fixed::operator--(int) {
	Fixed tmp(_fixpointValue);
	--(*this);
	return *this;
}

Fixed	Fixed::operator*(const Fixed &fixed) {
	return Fixed(toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) {
	return Fixed(toFloat() / fixed.toFloat());
}

bool	Fixed::operator>(const Fixed &fixed) {
	if (_fixpointValue > fixed._fixpointValue)
		return 1;
	return 0;
}

bool	Fixed::operator<(const Fixed &fixed) {
	if (_fixpointValue < fixed._fixpointValue)
		return 1;
	return 0;
}

bool	Fixed::operator>=(const Fixed &fixed) {
	if (_fixpointValue > fixed._fixpointValue || _fixpointValue == fixed._fixpointValue)
		return 1;
	return 0;
}

bool	Fixed::operator<=(const Fixed &fixed) {
	if (_fixpointValue < fixed._fixpointValue || _fixpointValue == fixed._fixpointValue)
		return 1;
	return 0;
}

bool	Fixed::operator==(const Fixed &fixed) {
	if (_fixpointValue == fixed._fixpointValue)
		return 1;
	return 0;
}

bool	Fixed::operator!=(const Fixed &fixed) {
	if (_fixpointValue != fixed._fixpointValue)
		return 1;
	return 0;
}

const Fixed& Fixed::max(Fixed const &fixed1, Fixed const &fixed2) {
	if (fixed1._fixpointValue > fixed2._fixpointValue)
		return fixed1;
	return
		fixed2;
}

const Fixed& Fixed::min(Fixed const &fixed1, Fixed const &fixed2) {
	if (fixed1._fixpointValue < fixed2._fixpointValue)
		return fixed1;
	return
		fixed2;
}