#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "I'm an WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal) : type_(wrongAnimal.type_) {}

WrongAnimal::~WrongAnimal() {
	std::cout << "I'm an WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "I'm an WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type_;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	if (this != &rhs)
		this->type_ = rhs.type_;
	return *this;
}
