#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

int     ft_check_number(std::string str)
{
    int i = 0;

    while (i < str.length())
    {
        if (!isdigit(str[i]))
            return (1);
        i++;
    }
    return (0);
}

void    Phonebook::add_contact(int id)
{
    std::string input;

    contacts[id].add_id(id);
    cout << "First name ?: "; 
    cin >> input;
    contacts[id].add_fn(input);
    cout << "Last name ?: ";
    cin >> input;
    contacts[id].add_ln(input);
    cout << "Nickname ?: ";
    cin >> input;
    contacts[id].add_nn(input);
    cout << "Phone number ?: ";
    cin >> input;
    while (ft_check_number(input) && cin.eof())
    {
        cout << "Error Number, Enter a valid number please: " << endl;
        cin >> input;
    }
    contacts[id].add_pn(input);
    cout << "Darkest secret ?: ";
    cin >> input;
    contacts[id].add_ds(input);
}

void print_format(std::string str)
{
    int i = 0;

    if (str.length() > 10)
    {
        while (i < 9)
        {
            cout << str[i];
            i++;
        }
        cout << ". ";
        return ;
    }
    if (str.length() < 10)
    {
        while (str[i])
        {
            cout << str[i];
            i++;
        }
        while (i < 11)
        {
            cout << ' ';
            i++;
        }
        return ;
   }

}

void    Phonebook::search_contact(Contact *book, int id)
{
    int i = 0;
    std::string str;

    if (id <= 0)
    {
        cout << "Phonebook is empty !" << endl;
        return ;
    }
    cout << "id |" << "first_name |" << "last_name  |" << "nickname   |" << endl;
    while (i < id)
    {
        cout << i;
        cout << "  |";
        str = contacts[i].print("first_name");
        print_format(str);
        cout << "|";
        str = contacts[i].print("last_name");
        print_format(str);
        cout << "|";
        str = contacts[i].print("nickname");
        print_format(str);
        cout << "|";
        i++;
        cout << "\n"; 
    }
    cout << "Id du contact à afficher ?: " << endl;
    cin >> str;
    if (ft_check_number(str) || atoi(str.c_str()) < 0 || atoi(str.c_str()) >= id)
    {
        if (cin.eof())
            return ;
        else
            cout << "Error ID invalid" << endl;
        return ;
    }
    i = atoi(str.c_str());
    cout << contacts[i].print("first_name") << endl;
    cout << contacts[i].print("last_name") << endl;
    cout << contacts[i].print("nickname") << endl;
    cout << contacts[i].print("phone_number") << endl;
    cout << contacts[i].print("darkest_secret") << endl;
    cout << "\n";
}

int    Phonebook::check_input(int id, std::string input, int more)
{
    if (input == "ADD")
    {   
        if (id >= 8)
        {
            id = 8;
            cout << "Too many contacts, Deleted contact id: " << more << endl;
            add_contact(more);
        }
        else
        {
            add_contact(id);
        }
    }
    if (input == "SEARCH")
    {
        search_contact(contacts, id);
    }
    if (input == "EXIT")
        return (-1);
    return (0);
}