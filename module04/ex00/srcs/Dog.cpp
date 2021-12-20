#include "Dog.hpp"

Dog::Dog() {
	type_ = "Dog";
	std::cout << "I'm a Dog constructor" << std::endl;
}

Dog::Dog(Dog const &dog) : Animal(dog) {}

Dog::~Dog() {
	std::cout << "I'm a Dog destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "I'm a Dog!" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	Animal::operator=(rhs);
	return *this;
}