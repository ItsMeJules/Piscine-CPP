#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
	private:
	protected:
		std::string const name_;
		AMateria *materia_[4];
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &character);
		~Character();

		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

		Character &operator=(Character const &rhs);
};

#endif