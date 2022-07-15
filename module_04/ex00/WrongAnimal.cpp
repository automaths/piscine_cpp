#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor class WrongAnimal called" << std::endl;
    this->type = "WrongAnimal";
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor class WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    this->type = a.getType();
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal &a)
{
    if (this != &a)
    {
        this->type = a.getType();
    }
    return (*this);
}