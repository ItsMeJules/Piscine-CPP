#include <iostream>
#include <fstream>
#include <string>
#include "NewReplace.hpp"

std::string toUpper(std::string str) {
	for (size_t i = 0; i < str.size(); i++)
		str[i] = std::toupper(str.at(i));
	return str;
}

int main(int ac, char **av) {
	std::string s1;
	std::string s2;

	if (ac < 4) {
		std::cout << "Mising arguments, usage: ./replace <file> <s1> <s2>" << std::endl;
		return 1;
	}
	s1 = std::string(av[2]);
	s2 = std::string(av[3]);
	if (s1.empty() || s2.empty()) {
		std::cout << "Given strings can't be empty!" << std::endl;
		return 1;
	}
	std::ifstream ifs(av[1]);
	
	if (!ifs.is_open()) {
		std::cout << "Failed to open " << av[1] << std::endl;
		return 1;
	}
	std::ofstream ofs(std::string(toUpper(av[1]) + ".replace").c_str());
	
	if (!ofs.is_open()) {
		std::cout << "Failed to open " << av[1] << ".replace" << std::endl;
		return 1;
	}
	NewReplace replacer(ifs, s1, s2);
	
	replacer.wirteInStream(ofs);
	ifs.close();
	ofs.close();
	return 0;
}