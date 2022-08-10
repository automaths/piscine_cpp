#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Constructor class Dog called" << std::endl;
    this->type = "Dog";
    this->dogBrain = new Brain;
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf mon gars" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor class Dog called" << std::endl;
    delete this->dogBrain;
}

Dog::Dog(const Dog &d)
{
    std::cout << "Copy constructor class Dog called" << std::endl;
    this->type = d.getType();
    this->dogBrain = new Brain;
}

Dog Dog::operator=(const Dog &d)
{
    std::cout << "Copy assignment operator class Dog called" << std::endl;
    if (this != &d)
    {
        this->type = d.getType();
    }
    this->dogBrain = new Brain;
    return (*this);
}