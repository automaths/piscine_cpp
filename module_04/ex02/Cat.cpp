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
    delete this->catBrain;
}

Cat::Cat(const Cat &d)
{
    std::cout << "Copy constructor class Cat called" << std::endl;
    this->type = d.getType();
    this->catBrain = new Brain;
}

Cat Cat::operator=(const Cat &d)
{
    std::cout << "Copy assignment operator class Cat called" << std::endl;
    if (this != &d)
    {
        this->type = d.getType();
    }
    this->catBrain = new Brain;
    return (*this);
}