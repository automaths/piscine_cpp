#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
    protected:
    std::string type;
    public: 
    Animal();
    ~Animal(){;};
    std::string   getType() const;
    virtual void makeSound() const;
};

class Brain
{
    std::string ideas[100];
};

class Dog : public Animal
{
    private:
    Brain *dogBrain;
    public:
    Dog();
    ~Dog();
    void makeSound() const;
};

class Cat : public Animal
{
    private:
    Brain *catBrain;
    public:
    Cat();
    ~Cat();
    void makeSound() const;
};


#endif