#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook {

private:
    Contact contacts[];
    int     bookSize;  
public:
    PhoneBook();

    int addContact(Contact contact);
    void searchContacts();
    void exitPhoneBook();
};

#endif 