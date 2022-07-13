#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>

class Conversion
{
    int int_conv;
    float float_conv;
    double double_conv;
    char char_conv;
    public:
    Conversion(std::string str);
    ~Conversion();
    void displaying();
};

#endif