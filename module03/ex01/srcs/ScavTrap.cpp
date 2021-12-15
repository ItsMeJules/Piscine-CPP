#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	  hitPoints_ = 100;
	  energyPoints_ = 50;
	  attackDamage_ = 20;
	std::cout << "ScavTrap | [" + name_ + "]> Finally... I am summoned by default!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	  hitPoints_ = 100;
	  energyPoints_ = 50;
	  attackDamage_ = 20;
	std::cout << "ScavTrap | [" + name_ + "]> Finally... I am summoned!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap) : ClapTrap(scavTrap) {
	std::cout << "ScavTrap | [" + name_ + "]> Finally... I am copied\?\?!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap | [" + name_ + "]> NOOOOOOOOOO DON'T CALL ME BACK" << std::endl;
}

void ScavTrap::attack(std::string const &target) const {
	std::cout << "ScavTrap " << name_ << " attacks ";
	std::cout << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() const {
	std::cout << " I entered in gate keeper mode! I am guarding the gate!" << std::endl;
}