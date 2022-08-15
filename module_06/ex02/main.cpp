#include <iostream>
#include <cstdlib>

class Base {public: virtual ~Base(void){}};
class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate(void)
{
	int tmp;
	Base *ptr;

	std::srand(time(0));
	tmp = rand() % 30;
	if (tmp <= 10)
	{
		std::cout << "creation of class A" << std::endl;
		ptr = new A();
	}
	else if (tmp <= 20)
	{
		std::cout << "creation of class B" << std::endl;
		ptr = new B();
	}
	else
	{
		std::cout << "creation of class C" << std::endl;
		ptr = new C();
	}
	return ptr;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "the class A has been identified from pointer" << std::endl;
	else
		std::cout << "it isn't class A (from pointer)" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "the class B has been identified from pointer" << std::endl;
	else
		std::cout << "it isn't class B (from pointer)" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "the class C has been identified from pointer" << std::endl;
	else
		std::cout << "it isn't class C (from pointer)" << std::endl;
}

void identify(Base& p)
{
	try 
	{
		p = dynamic_cast<A &>(p);
		std::cout << "A is identified from reference" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << ": it is not A (from reference)" << std::endl;
	}
	try 
	{
		p = dynamic_cast<B &>(p);
		std::cout << "B is identified from reference" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << ": it is not B (from reference)" << std::endl;
	}
	try 
	{
		p = dynamic_cast<C &>(p);
		std::cout << "C is identified from reference" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << ": it is not C (from reference)" << std::endl;
	}
}

int main(void)
{
	Base *ptr = generate();
	Base &rfr = *ptr;
	identify(ptr);
	identify(rfr);
	delete ptr;
}