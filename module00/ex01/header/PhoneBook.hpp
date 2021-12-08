#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int     bookSize;  
    public:
        PhoneBook();

        int addContact();
        void searchContacts();
        void askForIndex();
};

void horizontalBar(int size);

#endif 