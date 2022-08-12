#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &d);
    Cat& operator=(const Cat &d);

    void makeSound() const;
};
