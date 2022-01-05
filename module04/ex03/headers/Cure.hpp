#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
	private:
		
	public:
		Cure();
		Cure(Cure const &cure);
		~Cure();

		AMateria *clone() const;
		void use(ICharacter &target);

		Cure &operator=(Cure const &rhs);
};

#endif