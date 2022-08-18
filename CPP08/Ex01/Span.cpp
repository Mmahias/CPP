#include "Span.hpp"
#include <iostream>
#include <numeric>

Span::Span(unsigned int n) : _n(n), _nb(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

Span::Span(const Span &other) : _n(other._n), _nb(other._nb), _v(other._v)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = other;
}

Span &Span::operator=(const Span &op_other)
{
    std::cout << "Assignement Copy called" << std::endl;
    this->_n = op_other._n;
    this->_nb = op_other._nb;
    this->_v = op_other._v;
    return (*this);
}

Span::~Span()
{
    std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int n)
{
    _nb++;
    if (_v.size() >= _n || _nb > _n)
    {
        _nb--;
        throw (std::exception());
    }
    else
        _v.push_back(n);

}

int Span::shortestSpan(void)
{
    int shrt = 0;
    if (_nb <= 1 || _v.size() <= 1)
        throw std::exception();
    else
    {
        std::vector<int> vector = _v;
        std::sort(vector.begin(), vector.end());
        int result[_v.size()];
        std::adjacent_difference(vector.begin(), vector.end(), result);
        shrt = result[0];
        for (int i = 1; i < _v.size() ; i++)
        {
            if (shrt > result[i])
                shrt = result[i];
        }
    }
    return (shrt);
}

int Span::longestSpan(void)
{
    int lng = 0;
    if (_nb <= 1 || _v.size() <= 1)
        throw std::exception();
    else
    {
        auto max = std::max_element(_v.begin(), _v.end());
        auto min = std::min_element(_v.begin(), _v.end());
        lng = (*max  - *min);
    }
    return (lng);
}

unsigned int Span::getN(void) const
{
    return (this->_n);
}

unsigned int Span::getNb(void) const
{
    return (this->_nb);
}

std::vector<int> Span::getV(void) const
{
    return (this->_v);
}

void Span::addMultiNumbers(std::vector<int>::iterator its, std::vector<int>::iterator ite)
{
    for (std::vector<int>::iterator it = its; it != ite; it++)
    {
        //std::cout << *it << std::endl;
        addNumber(*it);
    }    
}

std::ostream &operator<<(std::ostream &out, const Span &current)
{   
    std::cout << "-----Vector----" << std::endl;
    for (unsigned int i = 0; i < current.getNb(); i++)
        std::cout << current.getV()[i] << std::endl;
    std::cout << "---------------" << std::endl;
    return (out); 
}