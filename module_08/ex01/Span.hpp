#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <exception>
#include <vector>
#include <list>
#include <deque>

class Exception : public std::exception
{
    virtual const char *what() const throw()
    {
        return ("There is an exception");
    }
};

template <typename T>
class Span
{
    T *content;
    int size;
    int rank;
    public:
    Span(int n);
    ~Span();
    void operator=(Span &to_copy);
    void addNumber(int n);
    typename T::iterator shortestSpan();
    int longestSpan();
};

template <typename T>
Span<T>::Span(int n)
{
    try
    {
        if (n <= 0)
            throw (Exception());
        std::allocator<T> myAllocator;
        this->content = myAllocator.allocate(n);
        this->size = n;
        this->rank = 0;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
};

template <typename T>
Span<T>::~Span()
{
    ;
};

template <typename T>
void Span<T>::addNumber(int n)
{
    try {
        if (this->rank + 1 == this->size)
            throw(Exception());
        this->content->push_back(n);
        this->rank += 1;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

template <typename T>
typename T::iterator Span<T>::shortestSpan()
{
    typename T:: iterator it;
    it = std::min_element(this->content->begin(), this->content->end());
    return (it);
}

template <typename T>
int Span<T>::longestSpan()
{
    typename T::iterator max;
    typename T::iterator min;
    int diff;

    try {
        if (size < 2)
            throw(Exception());
        max = std::max_element(this->content->begin(), this->content->end());
        min = std::min_element(this->content->begin(), this->content->end());
        diff = *max - *min;
        // max -= min;
        return (diff);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    return (-1);
    }
}


#endif