#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	private:
		std::string name_;
		int hitPoints_;
		int energyPoints_;
		int attackDamage_;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &rhs);
		~ClapTrap();

		void attack(std::string const &target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const;

		ClapTrap &operator=(ClapTrap const &rhs);
};

#endif