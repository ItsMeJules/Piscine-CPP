#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type_ = "WrongCat";
	std::cout << "I'm an WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongCat) : WrongAnimal(wrongCat) {}

WrongCat::~WrongCat() {
	std::cout << "I'm an WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "I'm a WrongCat!" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	WrongAnimal::operator=(rhs);
	return *this;
}