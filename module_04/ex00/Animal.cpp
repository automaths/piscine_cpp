#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Animal::Animal()
{
    std::cout << "Constructor class Animal called" << std::endl;
    this->type = "Animal";
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    ;
}

Animal::~Animal()
{
    std::cout << "Destructor class Animal called" << std::endl;
}

Animal::Animal(const Animal &a)
{
    this->type = a.getType();
}

Animal Animal::operator=(const Animal &a)
{
    if (this != &a)
    {
        this->type = a.getType();
    }
    return (*this);
}
