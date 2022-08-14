#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    public: 

    Array()
    {
        _n = 0;
        _array = NULL;
    }
    Array(unsigned int n) : _n(n)
    {
        _array = new T[n];
    }
    Array(const Array &other) : _n(0), _array(NULL)
    {
        *this = other;
    }
    Array &operator=(const Array &op_other)
    {
        this->_n = op_other.size();
        this->_array = new T[this->_n];
        for (unsigned int i = 0; i < this->_n; i++)
        {
            this->_array[i] = op_other._array[i];
        }
        return (*this);
    }
    ~Array()
    {
        if (this->_array)
            delete [] this->_array;
    }

    T &operator[](unsigned int i) const
    {
        if (i >= this->_n || i < 0)
            throw std::exception();
        return (this->_array[i]);
    }

    unsigned int size(void) const
    {
        return (this->_n);
    }

    private:

    unsigned int _n;
    T   *_array;

};

#endif