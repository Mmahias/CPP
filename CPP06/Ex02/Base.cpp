#include "Base.hpp"
#include <iostream>
#include <cstdlib>

Base::~Base(void)
{
    std::cout << "Base Destructor called" << std::endl;
}

Base* generate(void)
{
    int random = rand() % 3;

    if (random == 0)
    {
        std::cout << "One instance of class A created on generate function" << std::endl;
        return (new A());
    }
    else if (random == 1)
    {
        std::cout << "One instance of class B created on generate function" << std::endl;
        return (new B());
    }
    else
    {
        std::cout << "One instance of class C created on generate function" << std::endl;
        return (new C());
    }
    return (NULL);
}

void identify(Base *p)
{
    A *a;
    B *b;
    C *c;

    if ((a = dynamic_cast<A *>(p)))
        std::cout << "Identify PTR: Class A" << std::endl;
    else if ((b = dynamic_cast<B *>(p)))
        std::cout << "Identity PTR: Class B" << std::endl;
    else if ((c = dynamic_cast<C *>(p)))
        std::cout << "Identify PTR: Class C" << std::endl;
    else
        std::cout << "Identify PTR: Fail" << std::endl;
}

void identify(Base &p)
{
    try
    {
        p = dynamic_cast<A &>(p);
        std::cout << "Identify REF: Class A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    
    try
    {
        p = dynamic_cast<B &>(p);
        std::cout << "Identify REF: Class B" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }

    try
    {
        p = dynamic_cast<C &>(p);
        std::cout << "Identify REF: Class C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    return ;        
}
