#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
    int i = 1;
    size_t j = 0;

    if (argc < 2)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else
    {
        while (argv[i])
        {
            j = 0;
            while(j < strlen(argv[i]))
            {
                argv[i][j] = toupper(argv[i][j]);
                j++;
            } 
            cout << (argv[i]);
            i++;
        }
        cout << "\n";
    }
    return (0);
}