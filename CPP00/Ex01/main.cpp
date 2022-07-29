#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>

using namespace std;

int main(int argc, char **arvg)
{
    Phonebook repertoire;
    std::string input;
    int id = 0;
    int i = 0;
    int more = 0;

    while (i != -1)
    {
        cout << "ADD, SEARCH or EXIT:" << endl;
        cin >> input;
        i = repertoire.check_input(id, input, more);
        if (input == "ADD")
        {
            if (id >= 8)
            {
                more++;
                if (more >= 8)
                    more = 0;
            }
            else
                id++;
        }
        if (cin.eof())
            return (1);
        input.clear();
    }    
    return (0);      
} 