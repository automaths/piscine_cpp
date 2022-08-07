#ifndef HARL_CPP
# define HARL_CPP

#include <iostream>
#include <string>

class Harl{
    std::string level[4];
    void    (Harl::*exec[4])(void);
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    public: 
    Harl();
    ~Harl();
    Harl(const Harl &h);
    Harl operator=(const Harl &h);
    void complain(std::string level);
};

#endif