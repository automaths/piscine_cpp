#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
// #include "Brain.hpp"

class Cat : public Animal
{
    public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &d);
    Cat operator=(const Cat &d);

    void makeSound() const;

    private:
    Brain *catBrain;
};

#endif