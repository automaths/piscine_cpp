#pragma once

#include "Animal.hpp"

class WrongAnimal{
    public: 
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &a);
    WrongAnimal& operator=(const WrongAnimal &a);

    std::string   getType() const;

    void makeSound() const;

    protected:
    std::string type;
};
