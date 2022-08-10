#include "Animal.hpp"

class Brain
{
    public:
    Brain();
    virtual ~Brain();

    std::string getBrain();

    private:
    std::string ideas[100];
};
