#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal{
    public: 
    Animal();
    Animal(const Animal &a);
    virtual ~Animal();
    Animal& operator=(const Animal &a);

    std::string   getType() const;

    virtual void makeSound() const = 0;

    protected:
    std::string type;
};
