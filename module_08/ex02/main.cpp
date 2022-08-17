#include "MutantStack.hpp"

int main()
{
	std::cout << "\nCOMPARING STD STACK TO MUTANT STACK\n" << std::endl;

	MutantStack<int> mstack;
	std::stack<int> stdstack;

	assert(stdstack.empty() == 1);
	assert(mstack.empty() == 1);
	std::cout << "Asserting std and mutant stack is empty" << std::endl;
	mstack.push(24);
	mstack.push(42);
	mstack.push(142);
	stdstack.push(24);
	stdstack.push(42);
	stdstack.push(142);
	std::cout << "Mutant Stack size: " << mstack.size() << ", Std Stack size: " << stdstack.size() << std::endl;
	std::cout << "Mutant Stack top number: " << mstack.top() << ", Std Stack top number: " << stdstack.top() << std::endl;
	mstack.pop();
	mstack.pop();
	stdstack.pop();
	stdstack.pop();
	std::cout << "Mutant Stack size after two pop: " << mstack.size() << ", Std Stack size after two pop: " << stdstack.size() << std::endl;
	mstack.push(42);
	mstack.push(142);
	stdstack.push(42);
	stdstack.push(142);
	std::cout << "\nTesting mutant stack iterator for displaying a copy" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "The mutant stack: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> mstack_bis(mstack);
	MutantStack<int>::iterator its = mstack_bis.begin();
	MutantStack<int>::iterator ites = mstack_bis.end();
	++its;
	--its;
	std::cout << "The mutant stack copy: " << std::endl;
	while (its != ites)
	{
		std::cout << *its << std::endl;
		++its;
	}
	std::cout << "Testing mutant stack reverse iterator for displaying" << std::endl;
	MutantStack<int>::reverse_iterator it_r = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite_r = mstack.rend();
	std::cout << "The mutant stack (reverse): " << std::endl;
	while (it_r != ite_r)
	{
		std::cout << *it_r << std::endl;
		++it_r;
	}
	return 0;
}