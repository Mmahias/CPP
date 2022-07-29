#include <iostream>
#include <string>
#include <fstream>

using  namespace std;

void    ft_pos(std::string content, std::string s1, std::string s2, std::ofstream &file2)
{
    size_t pos;
    std::string new_content;
    int i = 0;

    pos = content.find(s1);
    if (pos == std::string::npos)
        file2 << content;
    else
    {
        while (i != pos)
        {
            file2 << content[i];
            i++;
        }
        if (i == pos)
        {
            file2 << s2;
            i = s1.length() + i;
            new_content = content.substr(i, content.length());
            ft_pos(new_content, s1, s2, file2);
        }
    }
}

void    ft_replace(std::string name, std::string s1, std::string s2)
{
    std::ifstream file1(name);
    std::string rep = ".replace";
    std::ofstream file2((name + rep), ios::out);
    std::string content;
    size_t pos;

    if (!file1)
        cout << "Error file: " << name << endl;
    if (!file2)
        cout << "Error file: " << (name + rep) << endl;
    if (s1 == "" || s2 == "")
        cout << "Error string: empty string" << endl;
    else
    {
         while (getline(file1, content))
         {
             ft_pos(content, s1, s2, file2);
             file2 << endl;
         }
    }
    file1.close();
    file2.close();
}

int main(int argc, char **argv)
{
    if (argc < 4 || argc > 4)
        cout << "Appropriate Command: <filename> s1 s2" << endl;
    else
    {
       ft_replace(argv[1], argv[2], argv[3]);
    }
    return (0);
}