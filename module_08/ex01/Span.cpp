#include "Span.hpp"

Span::Span():_capacity(0){}
Span::Span(unsigned int capacity):_capacity(capacity), _size(0), _stock(new int[capacity]){}
Span::Span(Span &s): _capacity(s.getCapacity()), _size(s.getSize()){
	if (this->_capacity > 0)
	{
		this->_stock = new int[this->_capacity];
		for (int i = 0; i < this->_size; ++i)
			this->_stock[i] = s.getStock(i);
	}
}
Span& Span::operator=(Span &s){
	if (this != &s)
	{
		if (this->_capacity > 0)
			delete[] this->_stock;
		this->_capacity = s.getCapacity();
		if (this->_capacity > 0)
		{
			this->_stock = new int[this->_capacity];
			this->_size = s.getSize();
			for (int i = 0; i < this->_size; ++i)
				this->_stock[i] = s.getStock(i);
		}
	}
	return (*this);	
}
Span::~Span(){
	if (this->_capacity > 0)
		delete[] this->_stock;
}
int Span::getStock(int i){return this->_stock[i];}
int Span::getCapacity(){return this->_capacity;}
int Span::getSize(){return this->_size;}
int& Span::operator[](int i){
	if (i >= this->_size || i < 0)
		throw OutOfRange();
	return (*(this->_stock + i));
}
void Span::addNumber(int n){
	if (this->_size + 1 > this->_capacity)
		throw Full();
	this->_stock[this->_size] = n;
	this->_size++;
}
void Span::addNumbers(int *begin, int *end){
	for (int *tmp = begin; tmp != end; ++tmp)
	{
		if (this->_size + 1 > this->_capacity)
			throw Full();
		this->_stock[this->_size] = *tmp;
		this->_size++;
	}
}

int Span::shortestSpan(){
	if (this->_size < 2)
		throw TooSmall();
	int diff = 2147483647;
	for (int i = 0; i < this->_size; ++i)
	{
		for (int j = 0; j < this->_size - 1; ++j)
		{
			if (j != i)
			{
				if (abs(this->_stock[j] - this->_stock[j + 1]) < diff)
					diff = abs(this->_stock[j] - this->_stock[j + 1]);
			}
		}
	}
	return diff;
}

int Span::longestSpan(){
	if (this->_size < 2)
		throw TooSmall();
	int *min = std::min_element(this->_stock, (this->_stock + this->_size));
	int *max = std::max_element(this->_stock, (this->_stock + this->_size));
	return (*max - *min);
}

const char* Span::Full::what() const throw() {return ("addNumber failed, Span full");}
const char* Span::TooSmall::what() const throw() {return ("can't evaluate span, the span is too small");}
const char* Span::OutOfRange::what() const throw() {return ("index out of range");}

//check with the const
