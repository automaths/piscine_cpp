#include "Conversion.hpp"

Conversion::Conversion(std::string input): str(input){}
Conversion::Conversion(Conversion &c): str(c.getStr()), c_char(c.getChar()), c_int(c.getInt()), c_float(c.getFloat()), c_double(c.getDouble()){}
Conversion &Conversion::operator=(Conversion &c){if (this != &c){this->str = c.getStr(); this->c_int = c.getInt(); this->c_char = c.getChar(); this->c_float = c.getFloat(); this->c_double = c.getDouble();} return (*this);}

std::string Conversion::getStr(){return this->str;}
char Conversion::getChar(){return this->c_char;}
int Conversion::getInt(){return this->c_int;}
float Conversion::getFloat(){return this->c_float;}
double Conversion::getDouble(){return this->c_double;}
