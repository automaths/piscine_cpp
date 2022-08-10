#include "Conversion.hpp"

    int int_conv;
    float float_conv;
    double double_conv;
    char char_conv;

Conversion::Conversion(std::string str)
{

    std::istringstream convert_char(str);
    if (!(convert_char >> this->char_conv))
        this->char_conv = 0;

    std::istringstream convert_int(str);
    if (!(convert_int >> this->int_conv))
        this->int_conv = 0;

    std::istringstream convert_float(str);
    if (!(convert_float >> this->float_conv))
        this->float_conv = 0;

    std::istringstream convert_double(str);
    if (!(convert_double >> this->double_conv))
        this->double_conv = 0;
    
    if (this->int_conv != 0 && this->float_conv)
        this->char_conv = this->int_conv;
    if (this->int_conv == 0 && this->char_conv != 0)
    {
        this->int_conv = this->char_conv;
        this->float_conv = this->int_conv;
        this->double_conv = this->int_conv;
    }

}

Conversion::~Conversion()
{
    ;
}

void    Conversion::displaying()
{
    if (this->char_conv > 32 && this->char_conv < 126)
        std::cout << "char: " << "'" << this->char_conv << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << this->int_conv << std::endl;
    std::cout << "float: " << this->float_conv << std::endl;
    std::cout << "double: " << this->double_conv << std::endl;
}
