#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal{
    protected:
    std::string type;
    public: 
    Animal();
    virtual ~Animal();
    std::string   getType() const;
    virtual void makeSound() const = 0;
};

#endif