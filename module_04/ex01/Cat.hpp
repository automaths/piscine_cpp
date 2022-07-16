#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
// #include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain *catBrain;
    public:
    Cat();
    ~Cat();
    Cat(const Cat &d);
    Cat operator=(const Cat &d);
    void makeSound() const;
};

#endif