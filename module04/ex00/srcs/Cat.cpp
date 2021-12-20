#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	type_ = "Cat";
	std::cout << "I'm a Cat constructor" << std::endl;
}

Cat::Cat(Cat const &cat) : Animal(cat) {}

Cat::~Cat() {
	std::cout << "I'm a Cat destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "I'm a Cat!" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	Animal::operator=(rhs);
	return *this;
}