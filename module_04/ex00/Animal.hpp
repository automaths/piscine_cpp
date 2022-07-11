#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class Animal{
    protected:
    std::string type;
    public: 
    Animal();
    ~Animal(){;};
    std::string   getType() const;
    virtual void makeSound() const;
};

class Dog : public Animal
{
    public:
    Dog();
    void makeSound() const;
};

class Cat : public Animal
{
    public:
    Cat();
    void makeSound() const;
};

#endif