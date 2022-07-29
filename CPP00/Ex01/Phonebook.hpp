#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class Phonebook
{
    public:
    
    Phonebook();
    ~Phonebook();
    void    add_contact(int id);
    void    search_contact(Contact *book, int id);
    int     check_input(int id, std::string input, int more);

    private:
    
    Contact contacts[8];
};

#endif