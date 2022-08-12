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
    this->dogBrain = d.getBrain();
}

Dog& Dog::operator=(const Dog &d)
{
    std::cout << "Copy assignment operator class Dog called" << std::endl;
    this->dogBrain = new Brain;
    if (this != &d)
    {
        this->type = d.getType();
    }
    this->dogBrain = d.getBrain();
    return (*this);
}

Brain* Dog::getBrain() const
{
    return (this->dogBrain);
}