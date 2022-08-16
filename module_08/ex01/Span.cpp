#include "Span.hpp"

Span::Span():_size(0){}
Span::Span(unsigned int size):_size(size), _stock(new int[size]){}
Span::Span(Span &s): _size(s.getSize()){
	if (this->_size > 0)
	{
		this->_stock = new int[this->_size];
		for (int i = 0; i < this->_size; ++i)
			this->_stock[i] = s.getStock(i);
	}
}
Span& Span::operator=(Span &s){
	if (this != &s)
	{
		if (_size > 0)
			delete[] this->_stock;
		this->_stock = new int[this->_size];
		this->_size = s.getSize();
		if (this->_size > 0)
		{
			for (int i = 0; i < this->_size; ++i)
				this->_stock[i] = s.getStock(i);
		}
	}
	return (*this);	
}
Span::~Span(){
	if (this->_size > 0)
		delete[] this->_stock;
}

int Span::getStock(int i){return this->_stock[i];}
int Span::getSize(){return this->_size;}
int& Span::operator[](int i){
	if (i >= this->_size || i < 0)
		throw OutOfRange();
	return (*(this->_stock + i));
}

void Span::addNumber(int n){(void)n;}
int Span::shortestSpan(){return 1;}
int Span::longestSpan(){return 1;}

const char* Span::Full::what() const throw() {return ("addNumber failed, Span full");}
const char* Span::TooSmall::what() const throw() {return ("can't evaluate span, the span is too small");}
const char* Span::OutOfRange::what() const throw() {return ("index out of range");}

//check with the const
