#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		materias_[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &materiaSource) {
	for (int i = 0; i < 4; i++)
		materias_[i] = materiaSource.materias_[i];
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (materias_[i] != NULL)
			delete materias_[i];
	}
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (materias_[i] == NULL) {
			materias_[i] = materia;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string type) {
	for (int i = 0; i < 4; i++) {
		if (materias_[i] == NULL)
			continue;
		if (materias_[i]->getType().compare(type) == 0)
			return materias_[i]->clone();
	}
	return 0;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (materias_[i])
				delete materias_[i];
			materias_[i] = rhs.materias_[i];			
		}
	}
	return *this;
}
