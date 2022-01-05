#include <iostream>
#include <string>

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(Ice const &ice) : AMateria(ice.type_) {}
Ice::~Ice() {}

void Ice::use(ICharacter &character) {
	std::cout << "*shoots an icebolt at " << character.getName() << "*" << std::endl;
}

AMateria *Ice::clone() const {
	return new Ice();
}

Ice &Ice::operator=(Ice const &rhs) {
	AMateria::operator=(rhs);
	return *this;
}