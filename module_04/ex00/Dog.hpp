#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    ~Dog();
    Dog(const Dog &d);
    Dog operator=(const Dog &d);
    void makeSound() const;
};

#endif