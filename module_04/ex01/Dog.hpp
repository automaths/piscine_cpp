#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &d);
    Dog& operator=(const Dog &d);

    void makeSound() const;
    Brain* getBrain() const;

    private:
    Brain *dogBrain;
};
