#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstdlib>

class Conversion{
	public:
	Conversion(std::string input);
	Conversion(Conversion &c);
	Conversion &operator=(Conversion &c);
	~Conversion();

	std::string getStr();
	int getInt();
	char getChar();
	float getFloat();
	double getDouble();

	private:
	std::string str;
	char c_char;
	int c_int;
	float c_float;
	double c_double;
};