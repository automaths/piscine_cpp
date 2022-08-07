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

Animal::~Animal()
{
    std::cout << "Destructor class Animal called" << std::endl;
}
