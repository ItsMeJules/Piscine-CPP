#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string readCommand() {
    std::string cmd;

	std::cout << "Enter a command (ADD|SEARCH|EXIT): " << std::endl;
	std::cout << "> ";
	std::getline(std::cin, cmd);
	return cmd;
}

int main() {
	PhoneBook book;
	std::string cmd;
	
	while (42) {
		cmd = readCommand();
		
		if (cmd.compare("ADD") == 0)
			book.addContact();
		else if (cmd.compare("SEARCH") == 0) {
			book.searchContacts();
			book.askForIndex();
		} else if (cmd.compare("EXIT") == 0)
			break ;
	}
}