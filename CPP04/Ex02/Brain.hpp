#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{

    private:

    static const int nb_ideas = 100;

    public: 

    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &op_other);
    virtual ~Brain(void);

    std::string ideas[Brain::nb_ideas];

};

#endif