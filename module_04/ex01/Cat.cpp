#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Constructor class Cat called" << std::endl;
    this->type = "Cat";
    this->catBrain = new Brain;
}

void Cat::makeSound() const
{
    std::cout << "Miaow Miaouw chacal" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor class Cat called" << std::endl;
    // delete[] this->catBrain;
}

Cat::Cat(const Cat &d)
{
    this->type = d.getType();
}

Cat Cat::operator=(const Cat &d)
{
    if (this != &d)
    {
        this->type = d.getType();
    }
    return (*this);
}