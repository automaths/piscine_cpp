#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongCat.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &d);
    WrongCat operator=(const WrongCat &d);
    void makeSound() const;
};

#endif