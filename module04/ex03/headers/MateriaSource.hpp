#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *materias_[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &materiaSource);
		~MateriaSource();

		void learnMateria(AMateria *materia);
		AMateria *createMateria(std::string type);

		MateriaSource &operator=(MateriaSource const &rhs);
};

#endif