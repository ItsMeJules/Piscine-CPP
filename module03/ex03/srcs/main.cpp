#include <iostream>

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	jon("Jon Snow");
	std::cout << "-----------------------------" << std::endl;
	DiamondTrap	night_k("Night King");
	std::cout << "-----------------------------" << std::endl;
	DiamondTrap	jon_bis(jon);
	std::cout << "-----------------------------" << std::endl;
	DiamondTrap arya;
	std::cout << "--------------[FUNCS]---------------" << std::endl;

	jon.whoAmI();
	night_k.whoAmI();
	jon_bis.whoAmI();
	jon.highFivesGuys();
	night_k.attack("jon");
	jon_bis.takeDamage(40);
	night_k.attack("jon");
	jon_bis.takeDamage(25);
	night_k.guardGate();
	arya.whoAmI();

	std::cout << "-----------------------------" << std::endl;
	arya = jon;
	std::cout << "-----------------------------" << std::endl;

	arya.whoAmI();
	return 0;
}