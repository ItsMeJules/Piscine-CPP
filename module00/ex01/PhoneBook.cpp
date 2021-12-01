#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    bookSize = 0;
}

int PhoneBook::addContact(Contact contact) {
    if (bookSize == 8) {
        std::cout << "The phone book is unfortunately full..." << std::endl;
        return (1);
    }
    contacts[bookSize].readInput();
    bookSize++;
    return (0);
}

void searchContacts() {

}

void exitPhoneBook() {
    
}