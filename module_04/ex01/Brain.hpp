#pragma once

#include "Animal.hpp"

class Brain
{
    public:
    Brain();
    virtual ~Brain();
    Brain(Brain const &b);
    Brain& operator=(Brain const &b);

    std::string getIdeas(int n) const;

    private:
    std::string ideas[100];
};
