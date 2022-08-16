#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>


class Span{
	public:
	Span();
	Span(unsigned int size);
	Span(Span &s);
	Span& operator=(Span &s);
	~Span();

	int getStock(int i);
	int getSize();
	int& operator[](int i);

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();

	class Full : public std::exception {virtual const char* what() const throw();};
	class TooSmall : public std::exception {virtual const char* what() const throw();};
	class OutOfRange : public std::exception {virtual const char* what() const throw();};

	private:
	int _size;
	int *_stock;
};