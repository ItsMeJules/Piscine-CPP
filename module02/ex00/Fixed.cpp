#include <iostream>
#include "Fixed.hpp"

int const Fixed::fBits = 8;

Fixed::Fixed(): rawBits_(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed) : rawBits_(fixed.rawBits_) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return rawBits_;
}

void Fixed::setRawBits(int const raw) {
	this->rawBits_ = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	if (&rhs != this) {
		std::cout << "Assignation operator called" << std::endl;
		rawBits_ = rhs.getRawBits();
	}
	return *this;
}