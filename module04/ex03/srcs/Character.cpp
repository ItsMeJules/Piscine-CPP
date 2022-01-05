#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++)
		materia_[i] = NULL;
}

Character::Character(std::string const &name) : name_(name) {
	for (int i = 0; i < 4; i++)
		materia_[i] = NULL;
}

Character::Character(Character const &character) : name_(character.name_) {
	for (int i = 0; i < 4; i++)
		materia_[i] = character.materia_[i]->clone();
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (materia_[i] != NULL)
			delete materia_[i];
	}
}

std::string const &Character::getName() const {
	return name_;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (materia_[i] == NULL) {
			materia_[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 4 && idx >= 0 && materia_[idx] != NULL)
		materia_[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3 || materia_[idx] == NULL)
		return ;
	materia_[idx]->use(target);
}

Character &Character::operator=(Character const &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (materia_[i] != NULL)
				delete materia_[i];
			materia_[i] = rhs.materia_[i]->clone();
		}
	}
	return *this;
}
