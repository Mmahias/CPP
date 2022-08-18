#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>

class Span
{
    public:

    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &op_other);
    ~Span();

    void    addNumber(int nb);
    int     shortestSpan(void);
    int     longestSpan(void);

    unsigned int getN(void) const;
    unsigned int getNb(void) const;
    std::vector<int> getV(void) const;

    void addMultiNumbers(std::vector<int>::iterator its, std::vector<int>::iterator ite);

    private:

    unsigned int _n;
    unsigned int _nb;
    std::vector<int> _v;
};
std::ostream &operator<<(std::ostream &out, const Span &current);

#endif