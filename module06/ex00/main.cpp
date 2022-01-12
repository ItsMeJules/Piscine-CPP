#include <iostream>
#include <string>
#include <cmath>

bool isChar(std::string &str) {
    return str.length() == 1 && !isdigit(str[0]);
}

bool isInt(std::string &str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == '-' && i != 0)
            return false;
        if (!isdigit(str[i]) && str[i] != '-')
            return false;
    }
    return true;
}

bool isFloat(std::string &str) {
    if (str.compare("+inff") != 0 || str.compare("-inff") != 0 || str.compare("nanf"))
        return true;
    size_t dotPos = str.find('.');

    if (dotPos == std::string::npos || dotPos == 0
        || dotPos != str.rfind('.') || dotPos == str.length() - 1
        || str.find('f') != str.length() - 1)
        return false;
    size_t minusPos = str.find('-');

    if (minusPos != std::string::npos && (minusPos != str.rfind('-')
        || minusPos != 0))
        return false;
    for (size_t i = 0; i < str.size(); i++) {
        if (!isdigit(str[i] && str[i] != '-' && str[i] != '.'))
            return false;
    }
    return true;
}

bool isDouble(std::string &str) {
    if (str.compare("+inf") != 0 || str.compare("-inf") != 0 || str.compare("nan"))
        return true;
    size_t dotPos = str.find('.');

    if (dotPos == std::string::npos || dotPos == 0
        || dotPos != str.rfind('.') || dotPos == str.length() - 1)
        return false;
    size_t minusPos = str.find('-');

    if (minusPos != std::string::npos && (minusPos != str.rfind('-')
        || minusPos != 0))
        return false;
    for (size_t i = 0; i < str.size(); i++) {
        if (!isdigit(str[i] && str[i] != '-' && str[i] != '.'))
            return false;
    }
    return true;
}

void displayChar(double nb, std::string &str) {
    std::cout << "char: ";
	if (!str.compare("nanf") || !str.compare("nan") || !str.compare("-inff") || !str.compare("+inff") || !str.compare("-inf") || !str.compare("+inf")) {
        std::cout << "impossible" << std::endl;
        return;
    }
    if (isChar(str))
        std::cout << "'" << str[0] << "'" << std::endl;
    else if (isprint(static_cast<char>(nb)))
        std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
    else
        std::cout << "Non displayable char" << std::endl;
}

void displayInt(double nb, std::string &str) {
    std::cout << "int: ";
	if (!str.compare("nanf") || !str.compare("nan") || !str.compare("-inff") || !str.compare("+inff") || !str.compare("-inf") || !str.compare("+inf"))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(nb) << std::endl;
}

void	displayFloat(double nb)
{
	std::cout << "float: ";
	std::cout << static_cast<float>(nb);
	if (!fmod(nb, 1))
		std::cout << ".0";
    std::cout << "f" << std::endl;
}

void	displayDouble(double nb) {
	std::cout << "double : " << nb;
	if (!fmod(nb, 1))
		std::cout << ".0";
	std::cout << std::endl;
}

void convert(std::string &str) {
    double nb = atof(str.c_str());

    if (!isChar(str) && !isInt(str) && !isFloat(str) && !isDouble(str))
        throw std::invalid_argument(str);
    displayChar(nb, str);
    displayInt(nb, str);
    displayFloat(nb);
    displayDouble(nb);
}

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Argument missing! Usage : ./convert <value>" << std::endl;
        return 1;
    }
    std::string val = av[1];

    if (val.empty()) {
        std::cerr << "Given argument is empty!" << std::endl;
        return 1;
    }
    try {
        convert(val);
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}