#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>

class Contact
{
    public:

    Contact(void);
    ~Contact(void);
    void    add_fn(std::string input);
    void    add_ln(std::string input);
    void    add_nn(std::string input);
    void    add_pn(std::string input);
    void    add_ds(std::string input);
    void    add_id(int id);
    std::string    print(std::string str);

    private:

    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

};

#endif