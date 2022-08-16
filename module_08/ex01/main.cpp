#include "Span.hpp"

int main()
{
	std::cout << "\nTESTING COPLIEN FORM\n" << std::endl;
	Span Default;
	assert(Default.getSize() == 0);
	std::cout << "Default size is: " << Default.getSize() << std::endl;
	Span SpanOne(6);
	assert(SpanOne.getSize() == 6);
	std::cout << "Initializing a Span of 6 gives size: " << SpanOne.getSize() << std::endl;


	std::cout << std::endl;
	return 0;
}