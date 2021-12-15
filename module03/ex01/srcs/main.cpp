#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap	sophie("Sophie");
	ClapTrap	xavier("Xavier");
	ScavTrap	norminet("Norminet");
	std::string	student = "student";

	std::cout << std::endl;

	sophie.attack(student);
	xavier.takeDamage(15);
	norminet.beRepaired(10);
	sophie.guardGate();
	norminet.guardGate();

	std::cout << std::endl;
	return 1;
}