#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
}

Dog::Dog() : Animal()
{
    this->type = "Dog";
}

Cat::Cat() : Animal()
{
    this->type = "Cat";
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    ;
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf mon gars" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaow Miaouw chacal" << std::endl;
}


