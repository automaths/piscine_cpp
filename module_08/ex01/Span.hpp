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
    void addRange(int tab[]);
    int shortestSpan();
    int longestSpan();
    void readContent();
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
void Span<T>::addRange(int tab[])
{
    for(int i = 0; i < tab.size(); ++i)
    {                                  
        std::cout << *it << std::end;
    }
}

template <typename T>
void Span<T>::addNumber(int n)
{
    try {
        if (this->rank == this->size)
            throw(Exception());
        this->content->push_back(n);
        this->rank += 1;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

template <typename T>
int Span<T>::shortestSpan()
{
    T copy(this->size);
    int diff;
    typename T:: iterator it_one;

    std::copy(this->content->begin(), this->content->end(), copy.begin());

    std::sort(copy.begin(), copy.end());

    diff = 2147483647;
    for (it_one = copy.begin() + 6; it_one != copy.end(); ++it_one)
    {
        if (*it_one - *(it_one - 1) < diff)
            diff = *it_one - *(it_one - 1);
    }
    return (diff);
}

template <typename T>
void Span<T>::readContent()
{
    typename T:: iterator it_one;
    for (it_one = this->content->begin(); it_one != this->content->end(); ++it_one)
        std::cout << *it_one << "." << std::endl;
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
        return (diff);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    return (-1);
    }
}


#endif