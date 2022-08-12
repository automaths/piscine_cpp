#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Constructor class WrongCat called" << std::endl;
    this->type = "WrongCat";
}

void WrongCat::makeSound() const
{
    std::cout << "Je suis le mechant chat salut ca va ?" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor class WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &d)
{
    this->type = d.getType();
}

WrongCat& WrongCat::operator=(const WrongCat &d)
{
    if (this != &d)
    {
        this->type = d.getType();
    }
    return (*this);
}

