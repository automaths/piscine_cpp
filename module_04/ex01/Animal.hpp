#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal{
    public: 
    Animal();
    virtual ~Animal();
    Animal(const Animal &a);
    Animal& operator=(const Animal &a);

    std::string   getType() const;

    virtual void makeSound() const;

    protected:
    std::string type;
};
