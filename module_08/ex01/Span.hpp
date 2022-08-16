#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>


class Span{
	public:
	Span();
	Span(unsigned int capacity);
	Span(Span &s);
	Span& operator=(Span &s);
	~Span();

	int getStock(int i);
	int getCapacity();
	int getSize();
	int& operator[](int i);

	void addNumber(int n);
	void addNumbers(int *begin, int *end);
	int shortestSpan();
	int longestSpan();

	class Full : public std::exception {virtual const char* what() const throw();};
	class TooSmall : public std::exception {virtual const char* what() const throw();};
	class OutOfRange : public std::exception {virtual const char* what() const throw();};

	private:
	int _capacity;
	int _size;
	int *_stock;
};