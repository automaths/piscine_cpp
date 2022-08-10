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
    std::cout << "This is the Animal roaaar" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor class Animal called" << std::endl;
}

Animal::Animal(const Animal &a)
{
    std::cout << "Copy constructor class Animal called" << std::endl;
    this->type = a.getType();
}
