#include <iostream>
#include "Contact.hpp"

void Contact::readInput() {
    std::cout << "Enter the first name: " << std::endl;
    std::getline(std::cin, firstName);
    std::cout << "Enter the last name: " << std::endl;
    std::getline(std::cin, lastName);
    std::cout << "Enter the nick name: " << std::endl;
    std::getline(std::cin, nickName);
    std::cout << "Enter the phone number: " << std::endl;
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter their darkest secret: " << std::endl;
    std::getline(std::cin, secret);
}

std::string Contact::getFirstName() {
    return (firstName);
}

std::string Contact::getLastName() {
    return (lastName);
}

std::string Contact::getNickName() {
    return (nickName);
}

std::string Contact::getPhoneNumber() {
    return (phoneNumber);
}

std::string Contact::getSecret() {
    return (secret);
}