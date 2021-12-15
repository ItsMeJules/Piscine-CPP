#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int const Fixed::fBits = 8;

Fixed::Fixed(): rawBits_(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val): rawBits_(val << fBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const val): rawBits_(roundf(val * (1 << fBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const {
	return float(rawBits_) / (1 << fBits);
}

int Fixed::toInt() const {
	return rawBits_ >> fBits;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return rawBits_;
}

void Fixed::setRawBits(int const raw) {
	this->rawBits_ = raw;
}

std::ostream &operator<<(std::ostream &os, Fixed const &rhs) {
	os << rhs.toFloat();
	return os;
}