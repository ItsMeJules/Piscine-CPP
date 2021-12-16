#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	private:
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &fragTrap);
		~FragTrap();

		void attack(std::string const &target) const;
		void highFivesGuys() const;

		FragTrap &operator=(FragTrap const &rhs);
};

#endif