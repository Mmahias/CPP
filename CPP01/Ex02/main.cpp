#include <iostream>

using namespace std;

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    cout << "ADDRESS STR: " << &str << endl;
    cout << "ADDRESS PTR: " << stringPTR << endl;
    cout << "ADDRESS REF: " << &stringREF << endl;
    cout << "\n-------------------------------\n" << endl;
    cout << "VALUE STR: " << str << endl;
    cout << "VALUE PTR: " << *stringPTR << endl;
    cout << "VALUE REF: " << stringREF << endl;

    return (0);    
}