#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
	protected:
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scavTrap);
		~ScavTrap();

		void attack(std::string const &target) const;
		void guardGate() const;

		ScavTrap &operator=(ScavTrap const &rhs);
};

#endif