#include "Animal.hpp"

Brain::Brain()
{
	std::cout << "Constructor class Brain called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor class Brain called" << std::endl;
}

Brain::Brain(const Brain &b)
{
    std::cout << "Copy constructor class Brain called" << std::endl;
    if (this != &b)
    {
		for (unsigned int i = 0; i < 100; ++i)
		{
			this->ideas[i] = b.getIdeas(i);
		}
    }
}

Brain& Brain::operator=(const Brain &b)
{
    std::cout << "Copy assignment operator class Brain called" << std::endl;
	if (this != &b)
	{
		for (unsigned int i = 0; i < 100; ++i)
		{
			this->ideas[i] = b.getIdeas(i);
		}
	}
    return (*this);
}

std::string Brain::getIdeas(int n) const
{
	return (this->ideas[n]);
}
