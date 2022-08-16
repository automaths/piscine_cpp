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
	Span SpanCopy(SpanOne);
	assert(SpanCopy.getSize() == 6);
	std::cout << "Initializing from Span size 6 gives size: " << SpanCopy.getSize() << std::endl;
	SpanOne[0] = 1; SpanOne[1] = 2; SpanOne[2] = 3;
	Default = SpanOne;
	assert(Default[0] == 1); assert(Default[1] == 2); assert(Default[2] == 3);
	std::cout << "Operator equal on default span to SpanOne (1, 2, 3) gives default content: " << Default[0] << ", " << Default[1] << ", " << Default[2] << std::endl;



	std::cout << std::endl;
	return 0;
}