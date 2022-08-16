#pragma once 

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(MutantStack const *m) : std::stack<T, Container>(m){}
		MutantStack &operator=(MutantStack const &m) {
			std::stack<T, Container>::operator=(m);
			return *this;
		}
		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		reverse_iterator rbegin() {return this->c.rbegin();}
		reverse_iterator rend() {return this->c.rend();}
	private:

};
