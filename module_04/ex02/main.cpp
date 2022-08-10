#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    i->makeSound(); 
    j->makeSound();
    // meta->makeSound();
    // delete meta;
    delete j;
    delete i;

    return 0;
}