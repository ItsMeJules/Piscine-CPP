#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;
public:

    void readInput();
    void printInCell(int index) const;
    void printContact() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getSecret() const;
};

#endif