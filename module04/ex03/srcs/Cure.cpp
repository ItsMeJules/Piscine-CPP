#include <iostream>
#include <string>

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(Cure const &cure) : AMateria(cure.type_) {}
Cure::~Cure() {}

void Cure::use(ICharacter &character) {
	std::cout << "*heals " << character.getName() << "'s wounds*" << std::endl;
}

AMateria *Cure::clone() const {
	return new Cure();
}

Cure &Cure::operator=(Cure const &rhs) {
	AMateria::operator=(rhs);
	return *this;
}