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
    Animal(const Animal &a);
    Animal operator=(const Animal &a);
    std::string   getType() const;
    virtual void makeSound() const;
};

#endif