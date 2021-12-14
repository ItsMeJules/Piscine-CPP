#include <iostream>
#include <string>
#include <Karen.hpp>

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Only 1 argument is accpted" << std::endl;
		return 1;
	}
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen karen;
	int i = 0;

	while (i < 4 && levels[i].compare(av[1]) != 0)
		i++;
	switch (i) {
	case 0:
		karen.complain(levels[0]);
	case 1:
		karen.complain(levels[1]);
	case 2:
		karen.complain(levels[2]);
	case 3:
		karen.complain(levels[3]);
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return 0;
}