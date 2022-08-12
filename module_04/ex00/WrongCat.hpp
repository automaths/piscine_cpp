#pragma once

#include "WrongCat.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(const WrongCat &d);
    WrongCat& operator=(const WrongCat &d);

    void makeSound() const;
};
