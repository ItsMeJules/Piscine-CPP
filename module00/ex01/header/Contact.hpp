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
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getSecret();
};

#endif CONTACT_HPP