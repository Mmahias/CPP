#include "Base.hpp"
#include <iostream>

int main(void)
{
    // GENERATE RANDOM CLASS A,B or C
    Base *base1 = generate();
    Base *base2 = generate();
    Base *base3 = generate();
    Base *base4 = generate();
    Base *base5 = generate();

    // IDENTIFY PTR
    identify(base1);
    identify(base2);
    identify(base3);
    identify(base4);
    identify(base5);


    // REF & IDENTIFY REF
    identify(*base1);
    identify(*base2);
    identify(*base3);
    identify(*base4);
    identify(*base5);

    // FREES
    delete base1;
    delete base2;
    delete base3;
    delete base4;
    delete base5;
}