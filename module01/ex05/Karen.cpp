#include "Karen.hpp"

Karen::Karen() {
	map_["DEBUG"] = &Karen::debug;
	map_["INFO"] = &Karen::info;
	map_["WARNING"] = &Karen::warning;
	map_["ERROR"] = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug() {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
	if (map_.count(level) == 1)
		(this->*map_[level])();
}