#include <iostream>
#include <string>

int main(int ac, char const **av)
{
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++) {
		std::string str = av[i];

		for (int j = 0; j < str.size(); j++)
			str[j] = std::toupper(str.at(j));
		std::cout << str; 
	}
	std::cout << std::endl;
	return (0);
}