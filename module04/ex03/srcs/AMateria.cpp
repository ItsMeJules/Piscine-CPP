#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {}
AMateria::AMateria(std::string const &type) : type_(type) {}
AMateria::AMateria(AMateria const &aMateria) : type_(aMateria.type_) {}
AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
	return type_;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}

AMateria *AMateria::clone() const {
	return NULL;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
	(void)rhs;
	return *this;
}
