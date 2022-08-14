#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <float.h>

class Conversion{
	public:

	Conversion(char *input);
	Conversion(Conversion &c);
	Conversion &operator=(Conversion &c);
	~Conversion();

	char* getStr();
	int getInt();
	char getChar();
	float getFloat();
	double getDouble();

	void convertChar();
	void convertInt();
	void convertFloat();
	void convertDouble();

	void converting();

	private:

	char *str;
	char c_char;
	int c_int;
	float c_float;
	double c_double;
};