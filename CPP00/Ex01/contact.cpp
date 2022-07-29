#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void    Contact::add_fn(std::string input)
{
    first_name = input;
}

void    Contact::add_ln(std::string input)
{
    last_name = input;
}

void    Contact::add_nn(std::string input)
{
    nickname = input;
}

void    Contact::add_pn(std::string input)
{
    phone_number = input;
}

void    Contact::add_ds(std::string input)
{
    darkest_secret = input;
}

void    Contact::add_id(int id)
{
    index = id;
}

std::string Contact::print(std::string str)
{
    if (str == "first_name")
        return (first_name);
    else if (str == "last_name")
        return (last_name);
    else if (str == "nickname")
        return (nickname);
    else if (str == "phone_number")
        return (phone_number);
    else
        return (darkest_secret);
}