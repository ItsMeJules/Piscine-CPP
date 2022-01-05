#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal() {
	std::cout << "I'm an Animal constructor" << std::endl;
}

Animal::Animal(Animal const &animal) : type_(animal.type_) {}

Animal::~Animal() {
	std::cout << "I'm an Animal destructor" << std::endl;
}

std::string Animal::getType() const {
	return type_;
}

Animal &Animal::operator=(Animal const &rhs) {
	if (this != &rhs)
		this->type_ = rhs.type_;
	return *this;
}
