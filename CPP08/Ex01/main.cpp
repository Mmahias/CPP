#include "Span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp;

    // SHORTEST & LONGEST
    std::cout << "-----SHORTEST & LONGEST-----" << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "----------------------------" << std::endl;

    // TEST ADD_NUMBER
    std::cout << "----- FAIL ADD_NUMBERS-----" << std::endl;
    try
    {
        sp.addNumber(10);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

    //RANGE OF ITERATOR
    std::cout << "-----RANGE of ITERATOR-----" << std::endl;
    std::vector<int>            v;
    Span sprange = Span(5);

    v.push_back(15);
    v.push_back(37);
    v.push_back(123);
    v.push_back(12);
    v.push_back(52);

    sprange.addMultiNumbers(v.begin(), v.end());
    std::cout << sprange;
    
       // SHORTEST & LONGEST SPRANGE
    std::cout << "-----SHORTEST & LONGEST SPRANGE-----" << std::endl;
    std::cout << sprange.shortestSpan() << std::endl;
    std::cout << sprange.longestSpan() << std::endl;
    std::cout << "----------------------------" << std::endl;
    return (0);
}