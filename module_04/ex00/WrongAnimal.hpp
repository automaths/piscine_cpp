#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal{
    protected:
    std::string type;
    public: 
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &a);
    WrongAnimal operator=(const WrongAnimal &a);
    std::string   getType() const;
    virtual void makeSound() const;
};

#endif