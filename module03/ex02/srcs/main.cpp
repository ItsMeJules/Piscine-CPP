#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ScavTrap	sophie("Sophie");
	ClapTrap	xavier("Xavier");
	ScavTrap	norminet("Norminet");
	FragTrap	emaule("Nicolas");

	std::string	student = "student";

	std::cout << std::endl;

	sophie.attack(student);
	xavier.takeDamage(15);
	norminet.beRepaired(10);
	emaule.attack("Piscineux");
	sophie.guardGate();
	norminet.guardGate();
	emaule.highFivesGuys();

	std::cout << std::endl;
	return 1;
}