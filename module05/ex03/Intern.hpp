#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern {
    private:
        Form **forms_;
    public:
        Intern();
        Intern(Intern const &it);
        ~Intern();

        Form *makeForm(std::string formType, std::string formTarget);

        Intern &operator=(Intern const &rhs);
};

#endif