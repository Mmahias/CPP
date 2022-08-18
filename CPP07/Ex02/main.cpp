#include <iostream>
#include "Array.hpp"

int main(void)
{
    //ARRAY CHAR
    std::cout << "-----ARRAY CHAR----" << std::endl;
    Array<char> c(3);
    c[0] = 'h';
    c[1] = 'e';
    c[2] = 'y';
    for (unsigned int i = 0; i < 3; i++)
    {
        std::cout << "c[" << i << "]: " << c[i] << std::endl;
    }
    std::cout << "-------------------" << std::endl;

    //ARRAY FLOAT
    std::cout << "-----ARRAY FLOAT-----" << std::endl;
    Array<float> f(3);
    f[0] = 42.0;
    f[1] = 0.42;
    f[2] = 42.21;
    for (unsigned int i = 0; i < 3; i++)
    {
        std::cout << "f[" << i << "]: " << f[i] << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    
    // TESTS OPERATOR[]
    std::cout << "---Tests Operator[]---" << std::endl;
    std::cout << "Test1 : f[-2]" << std::endl;
    try
    {
        f[-2] = 0;
        std::cout << "Test1: [OK]" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::cout << "Test2 : c[0]" << std::endl;
    try
    {
        
        c[0] = 'H';
        std::cout << "Test2: [OK] --> c[0]: " << c[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl; 
    
    return (0);
}

/*#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/