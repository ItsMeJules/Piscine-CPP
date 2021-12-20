#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	type_ = "Dog";
	brain_ = new Brain();
	std::cout << "I'm a Dog constructor" << std::endl;
}

Dog::Dog(Dog const &dog) : Animal(dog), brain_(new Brain()) {
	std::cout << "I''m a Dpg copy constructor" << std::endl;
	*this = dog;
}

Dog::~Dog() {
	delete brain_;
	std::cout << "I'm a Dog destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "I'm a Dog!" << std::endl;
}

Brain *Dog::getBrain() {
	return brain_;
}

Dog &Dog::operator=(Dog const &rhs) {
	Animal::operator=(rhs);
	delete brain_;
	brain_ = new Brain();
	*brain_ = *rhs.brain_;
	std::cout << "Brain copied deeply!" << std::endl;
	return *this;
}