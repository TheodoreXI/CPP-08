#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <deque>


template <typename T> 
class MutantStack : public std::stack<T>
{
    typedef typename std::deque<T>::iterator iterator;
    private:
        typename std::deque<T>::iterator it;
    public:
        MutantStack(void)
        {
            std::cout << "default constructor called\n";
        }
        iterator begin(void)
        {
            it = this->c.begin();
            return (it);
        }
        iterator end(void)
        {
            it = this->c.end();
            return (it);
        }


};


#endif