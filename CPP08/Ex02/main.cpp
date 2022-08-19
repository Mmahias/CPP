#include "MutanStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;

    // MAIN 42   
    std::cout << "-----MAIN 42-----" << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);
    std::cout << "-----------------" << std::endl;
    std::cout << std::endl;

    // OTHERS TESTS
    MutantStack<int> empty_stack;
    
    std::cout << "-----EMPTY-----" << std::endl;
    std::cout << "No Empty: " <<  mstack.empty() << std::endl;
    std::cout << "Empty: " << empty_stack.empty() << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-----POP-----" << std::endl;
    std::cout << "-----Before----" << std::endl;
    it = mstack.begin();
    ite = mstack.end();
     while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    mstack.pop();
    it = mstack.begin();
    ite = mstack.end();
    std::cout << "-----After----" << std::endl;
     while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "--------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-----PUSH-----" << std::endl;
    std::cout << "-----Before-----" << std::endl;
    it = mstack.begin();
    ite = mstack.end();
     while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "-----After push(42)-----" << std::endl;
    mstack.push(42);
    it = mstack.begin();
    ite = mstack.end();
     while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-----OPERATOR = -----" << std::endl;
    std::cout << "-----Before-----" << std::endl;
    it = empty_stack.begin();
    ite = empty_stack.end();
     while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Empty stack is: "  << empty_stack.empty() << std::endl;
    std::cout << "Empty stack size: " << empty_stack.size() << std::endl;
    std::cout << "-----After (Empty_stack = mstack)-----" << std::endl;
    empty_stack = mstack;
    it = empty_stack.begin();
    ite = empty_stack.end();
     while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Empty stack is: " << empty_stack.empty() << std::endl;
    std::cout << "Empty stack size:" << empty_stack.size() << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-----ITERATOR RBEGIN/RAFER-----" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
     while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-----CONST ITERATOR------" << std::endl;
    MutantStack<int>::const_iterator cit = mstack.begin();
    MutantStack<int>::const_iterator cite = mstack.end();
    std::cout << "Lecture Const Int" << std::endl;
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }
    // Ecriture Const Int
    /*for (MutantStack<int>::const_iterator cit2 = mstack.begin(); cit2 != mstack.end(); ++cit2) {
        (*cit2)++;
    }*/
    // ERROR: l'expression doit être une valeur modifiable.
    std::cout << "-------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "----CONST MUTANT & CONST ITE-----" << std::endl;
    const MutantStack<int> c_stack (mstack);
    for (MutantStack<int>::const_iterator c_it = c_stack.begin(); c_it < c_stack.end(); c_it++)
    {
        std::cout << *c_it << std::endl;
    }
    // CONST MUTANT & ITE
    // ERROR: On peux itéré sur un Container Const seulement avec un Const Iterator
    /*for (MutantStack<int>::iterator i = c_stack.begin(); i < c_stack.end(); i++)
    {
        std::cout << *i << std::endl;
    }*/
    std::cout << "--------------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-----CONST ITERATOR RBEGIN/RAFER-----" << std::endl;
    for (MutantStack<int>::const_reverse_iterator ri = c_stack.rbegin(); ri < c_stack.rend(); ri++)
    {
        std::cout << *ri << std::endl;
    }
    std::cout << "-------------------------------------" << std::endl;
    std::cout << std::endl;
    
    return (0);
}