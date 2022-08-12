#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    std::cout << "constructor called" << std::endl;
    this->level[0] = "DEBUG";
    this->level[1] = "INFO";
    this->level[2] = "WARNING";
    this->level[3] = "ERROR";
    this->exec[0] = &Harl::debug;
    this->exec[1] = &Harl::info;
    this->exec[2] = &Harl::warning;
    this->exec[3] = &Harl::error;
}

Harl::~Harl()
{
    std::cout << "destructor called" << std::endl;
}

void Harl::complain(std::string str)
{
    for (unsigned int i = 0; i < 4; ++i)
    {
        if (this->level[i].compare(str) == 0)
            (this->*exec[i])();
    }
}
