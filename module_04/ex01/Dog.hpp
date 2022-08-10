#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
// #include "Brain.hpp"

class Dog : public Animal
{
    public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &d);
    Dog operator=(const Dog &d);

    void makeSound() const;

    private:
    Brain *dogBrain;
};

#endif