#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int const Fixed::fBits = 8;

Fixed::Fixed(): rawBits_(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val): rawBits_(val << fBits) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const val): rawBits_(roundf(val * (1 << fBits))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const {
	return float(rawBits_) / (1 << fBits);
}

int Fixed::toInt() const {
	return rawBits_ >> fBits;
}

int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
	return rawBits_;
}

void Fixed::setRawBits(int const raw) {
	this->rawBits_ = raw;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	if (&rhs != this) {
		// std::cout << "Assignation operator called" << std::endl;
		rawBits_ = rhs.getRawBits();
	}
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed cpy(*this);
	operator++();
	return cpy;
}

Fixed &Fixed::operator++() {
	rawBits_++;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed cpy(*this);
	operator--();
	return cpy;
}

Fixed &Fixed::operator--() {
	rawBits_--;
	return *this;
}

std::ostream &operator<<(std::ostream &os, Fixed const &rhs) {
	os << rhs.toFloat();
	return os;
}

bool operator>(Fixed const &a, Fixed const &b) {
	return a.getRawBits() > b.getRawBits();
}

bool operator<(Fixed const &a, Fixed const &b) {
	return a.getRawBits() < b.getRawBits();
}

bool operator>=(Fixed const &a, Fixed const &b) {
	return a.getRawBits() >= b.getRawBits();
}

bool operator<=(Fixed const &a, Fixed const &b) {
	return a.getRawBits() <= b.getRawBits();
}

bool operator==(Fixed const &a, Fixed const&b) {
	return a.getRawBits() == b.getRawBits();

}

bool operator!=(Fixed const &a, Fixed const&b) {
	return a.getRawBits() != b.getRawBits();
}

Fixed operator+(Fixed const &a, Fixed const&b) {
	return Fixed(a.toFloat() + b.toFloat());
}

Fixed operator-(Fixed const &a, Fixed const&b) {
	return Fixed(a.toFloat() - b.toFloat());
}

Fixed operator*(Fixed const &a, Fixed const&b) {
	return Fixed(a.toFloat() * b.toFloat());
}

Fixed operator/(Fixed const &a, Fixed const&b) {
	return Fixed(a.toFloat() / b.toFloat());
}
