#include <iostream>
#include <iomanip>
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

void Contact::printInCell(int index) {
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10);
    if (firstName.size() > 10)
        std::cout << firstName.substr(0, 9) + ".";
    else
        std::cout << firstName;
    std::cout << "|" << std::setw(10);
    if (lastName.size() > 10)
        std::cout << lastName.substr(0, 9) + ".";
    else
        std::cout << lastName;
    std::cout << "|" << std::setw(10);
    if (nickName.size() > 10)
        std::cout << nickName.substr(0, 9) + ".";
    else
        std::cout << nickName;
    std::cout << "|" << std::endl;
}

void Contact::printContact() {
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Darkest secret: " << secret << std::endl;
}

std::string Contact::getFirstName() {
    return firstName;
}

std::string Contact::getLastName() {
    return lastName;
}

std::string Contact::getNickName() {
    return nickName;
}

std::string Contact::getPhoneNumber() {
    return phoneNumber;
}

std::string Contact::getSecret() {
    return secret;
}