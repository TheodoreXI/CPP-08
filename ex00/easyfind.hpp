#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &a, int k)
{
    typename T::iterator it;
    for (typename T::iterator it = a.begin(); it != a.end(); it++)
    {
        if (*it == k)
        {
            return (it);
        }
    }
    return (a.end());
}




#endif