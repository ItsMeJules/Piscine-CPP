#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	type_ = "Cat";
	brain_ = new Brain();
	std::cout << "I'm a Cat constructor" << std::endl;
}

Cat::Cat(Cat const &cat) : Animal(cat), brain_(new Brain()) {
	std::cout << "I''m a Cat copy constructor" << std::endl;
	*this = cat;
}

Cat::~Cat() {
	delete brain_;
	std::cout << "I'm a Cat destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "I'm a Cat!" << std::endl;
}

Brain *Cat::getBrain() {
	return brain_;
}

Cat &Cat::operator=(Cat const &rhs) {
	if (this != &rhs) {
		this->type_ = rhs.type_;
		delete brain_;
		brain_ = new Brain();
		*brain_ = *rhs.brain_;
		std::cout << "Brain copied deeply!" << std::endl;
	}
	return *this;
}