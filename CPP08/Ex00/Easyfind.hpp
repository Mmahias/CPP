#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>


template <typename T>
int easyfind (T const &t, int n)
{
    typename T::const_iterator it = std::find(t.begin(), t.end(), n);
    if (*it == n && it != t.end())
        return (*it);
    else
        throw std::exception();
}

#endif