#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class AMateria {
	private:
	protected:
		std::string const type_;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &aMateria);
		virtual ~AMateria();

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

		std::string const &getType() const;

		AMateria &operator=(AMateria const &rhs);
};

#endif