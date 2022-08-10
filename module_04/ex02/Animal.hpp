#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal{
    public: 
    Animal();
    Animal(const Animal &a);
    virtual ~Animal();

    std::string   getType() const;

    virtual void makeSound() const = 0;

    protected:
    std::string type;
};

#endif