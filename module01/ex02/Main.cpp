#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "str with pointer: " << *stringPTR << std::endl;
	std::cout << "str with reference: " << stringREF << std::endl;
}