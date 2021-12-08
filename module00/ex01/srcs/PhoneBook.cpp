#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	bookSize = 0;
}

int PhoneBook::addContact() {
	if (bookSize == 8) {
		std::cout << "The phone book is unfortunately full..." << std::endl;
		return (1);
	}
	contacts[bookSize].readInput();
	bookSize++;
	return (0);
}

void PhoneBook::searchContacts() {
	horizontalBar(10 * 4 + 4);
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	horizontalBar(10 * 4 + 4);
	for (int i = 0; i < bookSize; i++) {
		contacts[i].printInCell(i);
		horizontalBar(10 * 4 + 4);
	}
}

void PhoneBook::askForIndex() {
	std::string indexStr;
	int index = 0;
	int loop = 0;

	do {
		if (loop != 0)
			std::cout << "The given index is not valid!" << std::endl;
		std::cout << "Enter the index [0-7] of the desired contact:" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, indexStr);
		std::cout << std::endl;
		loop++;
	} while (indexStr.find_first_not_of("0123456789") != std::string::npos ||
		indexStr.size() != 1 || indexStr.at(0) >= bookSize + '0');
	index = atoi(indexStr.c_str());
	contacts[index].printContact();
}

void horizontalBar(int size) {
	for (int i = 0; i <= size; i++)
		std::cout << "-";
	std::cout << std::endl;
}

