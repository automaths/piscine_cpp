#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *Zoo[100];
    for (unsigned int i = 0; i < 50; ++i)
    {
        Animal *tmp = new Dog();
        Zoo[i] = tmp;
    }
    for (unsigned int i = 50; i < 100; ++i)
    {
        Animal *tmp = new Cat();
        Zoo[i] = tmp;
    }
    Zoo[2]->makeSound();
    Zoo[18]->makeSound();
    Zoo[56]->makeSound();
    Zoo[75]->makeSound();

    for (unsigned int i = 0; i < 100; ++i)
        delete Zoo[i];

    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;
    // delete i;

    return 0;
}