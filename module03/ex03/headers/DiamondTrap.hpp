#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string name_;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &diamondTrap);
		~DiamondTrap();

		using FragTrap::hitPoints_;
		using ScavTrap::energyPoints_;
		using FragTrap::attackDamage_;
		using ScavTrap::attack;

		void whoAmI() const;

		std::string getName() const;	

		DiamondTrap &operator=(DiamondTrap const &rhs);
};

#endif