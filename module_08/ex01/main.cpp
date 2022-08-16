#include "Span.hpp"

int main()
{
	std::cout << "\nTESTING COPLIEN FORM\n" << std::endl;
	Span Default;
	assert(Default.getCapacity() == 0);
	std::cout << "Default capacity is: " << Default.getCapacity() << std::endl;
	Span SpanOne(4);
	assert(SpanOne.getCapacity() == 4);
	std::cout << "Initializing a Span of 4 gives capacity: " << SpanOne.getCapacity() << std::endl;
	Span SpanCopy(SpanOne);
	assert(SpanCopy.getCapacity() == 4);
	std::cout << "Initializing from Span capacity 4 gives capacity: " << SpanCopy.getCapacity() << std::endl;
	SpanOne.addNumber(1); SpanOne.addNumber(2); SpanOne.addNumber(3); 
	Default = SpanOne;
	assert(Default[0] == 1); assert(Default[1] == 2); assert(Default[2] == 3);
	std::cout << "Operator equal on default span to SpanOne (1, 2, 3) gives default content: " << Default[0] << ", " << Default[1] << ", " << Default[2] << std::endl;

	std::cout << "\nTESTING ADD NUMBER\n" << std::endl;
	SpanOne.addNumber(4);
	assert(SpanOne[3] == 4);
	std::cout << "Function call addNumber(4) to SpanOne gives value of: " << SpanOne[3] << std::endl;

	std::cout << "\nTESTING LONGEST SPAN\n" << std::endl;
	assert(SpanOne.longestSpan() == 3);
	std::cout << "The longest Span of SpanOne is 4 - 1: " << SpanOne.longestSpan() << std::endl;

	std::cout << "\nTESTING SHORTEST SPAN\n" << std::endl;
	Span SpanTwo(6);
	SpanTwo.addNumber(11); SpanTwo.addNumber(119); SpanTwo.addNumber(226); SpanTwo.addNumber(65); SpanTwo.addNumber(95); SpanTwo.addNumber(333); 
	std::cout << "Creating Span with 6 different values: " << SpanTwo[0] << ", " << SpanTwo[1] << ", " << SpanTwo[2] << ", " << SpanTwo[3] << ", " << SpanTwo[4] << ", " << SpanTwo[5] << std::endl;
	std::cout << "The shortest Span of SpanTwo should be 30 (95 - 65): " << SpanTwo.shortestSpan() << std::endl;

	std::cout << "\nTESTING MULTIPLE NUMBERS AT ONCE\n" << std::endl;
	Span SpanThree(6);
	SpanThree.addNumbers(&SpanTwo[0], &SpanTwo[5]);
	std::cout << "Adding on SpanThree five numbers at once from SpanTwo: " << SpanThree[0] << ", " << SpanThree[1] << ", " << SpanThree[2] << ", " << SpanThree[3] << ", " << SpanThree[4] << std::endl;

	std::cout << "\nTESTING EXCEPTIONS\n" << std::endl;
	std::cout << "If the capacity is full" << std::endl;
	try{
		Span SpanTry(1);
		SpanTry.addNumber(3);
		SpanTry.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}
	std::cout << "If the size is less than two when trying to evaluate a span: " << std::endl;
	try{
		Span SpanTry(1);
		SpanTry.addNumber(3);
		SpanTry.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}
	std::cout << "If the index is out of range: " << std::endl;
	try{
		Span SpanTry(1);
		SpanTry.addNumber(3);
		SpanTry[1];
	}
	catch (std::exception &e)
	{
		std::cout << "An exception has been caught: " << e.what() << std::endl;
	}


	std::cout << std::endl;
	return 0;
}