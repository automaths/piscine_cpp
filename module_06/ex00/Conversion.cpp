#include "Conversion.hpp"

Conversion::Conversion(char *input): str(input){}
Conversion::Conversion(Conversion &c): str(c.getStr()), c_char(c.getChar()), c_int(c.getInt()), c_float(c.getFloat()), c_double(c.getDouble()){}
Conversion &Conversion::operator=(Conversion &c){if (this != &c){this->str = c.getStr(); this->c_int = c.getInt(); this->c_char = c.getChar(); this->c_float = c.getFloat(); this->c_double = c.getDouble();} return (*this);}
Conversion::~Conversion(){}

char* Conversion::getStr(){return this->str;}
char Conversion::getChar(){return this->c_char;}
int Conversion::getInt(){return this->c_int;}
float Conversion::getFloat(){return this->c_float;}
double Conversion::getDouble(){return this->c_double;}

void Conversion::convertChar(){this->c_char = static_cast<char>(this->c_double);}

void Conversion::convertInt(){this->c_int = static_cast<int>(this->c_double);}

void Conversion::convertFloat(){this->c_float = static_cast<float>(this->c_double);}

void Conversion::convertDouble(){this->c_double = atof(this->str);}

void Conversion::converting(){
	if (strlen(this->str) == 1 && !(this->str[0] >= '0' && this->str[0] <= '9'))
	{
		if (!(this->str[0] >= 32 && this->str[0] <= 126))
		{
			std::cout << "Cannot convert non printable char, please enter valid argument" << std::endl;
			return;
		}
		this->c_char = this->str[0];
		this->c_int = static_cast<int>(this->str[0]);
		this->c_float = static_cast<float>(this->c_int);
		this->c_double = static_cast<double>(this->c_int);
	}
	else
	{
		convertDouble();
		convertChar();
		convertInt();
		convertFloat();
	}
	std::cout.precision(1);
	if (!(this->c_int >= 0 && this->c_int <= 255))
		std::cout << "char: impossible" << std::endl;
	else if (!(this->c_int >= 32 && this->c_int <= 126))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << this->c_char << "'" << std::endl;
	if (!(this->c_double >= INT_MIN && this->c_double <= INT_MAX) && std::isfinite(this->c_int))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->c_int << std::endl;
	if (!(this->c_double >= -FLT_MAX && this->c_double <= FLT_MAX) && std::isfinite(this->c_float))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << this->c_float << "f" << std::endl;
	if (!(this->c_double >= -DBL_MAX && this->c_double <= DBL_MAX) && std::isfinite(this->c_double))
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << std::fixed << this->c_double << std::endl;
}
