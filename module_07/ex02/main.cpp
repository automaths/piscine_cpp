#include "Array.hpp"

int main()
{
    {
        std::cout << "\nTESTING DEFAULT CONSTRUCTOR" << std::endl;
        Array<int> one;
    }
    {
        std::cout << "\nTESTING UNSIGNED INT CONSTRUCTOR" << std::endl;
        Array<int> one(3);
        for (unsigned int i = 0; i < 3; ++i)
            std::cout << one[i] << std::endl;
    }
    {
        std::cout << "\nTESTING COPY CONSTRUCTOR" << std::endl;
        Array<int> one(3);
        one[0] = 1;
        one[1] = 2;
        one[2] = 3;
        std::cout << "Original Array: " << one[0] << one[1] << one[2] << std::endl;
        Array<int> two(one);
        std::cout << "New Array: " << two[0] << two[1] << two[2] << std::endl;
    }
    {
        std::cout << "\nTESTING OPERATOR=" << std::endl;
        Array<int> one(3);
        one[0] = 1;
        one[1] = 2;
        one[2] = 3;
        std::cout << "Array one: " << one[0] << one[1] << one[2] << std::endl;
        Array<int> two(3);
        two[0] = 7;
        two[1] = 8;
        two[2] = 9;
        std::cout << "Array two: " << two[0] << two[1] << two[2] << std::endl;
        two = one;
        std::cout << "New Array two: " << two[0] << two[1] << two[2] << std::endl;
    }
    {
        try
        {
            std::cout << "\nTESTING OPERATOR[] EXCEPTION (too far)" << std::endl;
            Array<int> one(3);
            one[0] = 1;
            one[1] = 2;
            one[2] = 3;
            one[3];
        }
        catch (std::exception &e)
        {
            std::cout << "An exception has been caught: " << e.what() << std::endl;
        }
        try
        {
            std::cout << "\nTESTING OPERATOR[] EXCEPTION (negative value)" << std::endl;
            Array<int> one(3);
            one[0] = 1;
            one[1] = 2;
            one[2] = 3;
            one[3];
        }
        catch (std::exception &e)
        {
            std::cout << "An exception has been caught: " << e.what() << std::endl;
        }
    }
    {
        std::cout << "\nTESTING SIZE" << std::endl;
        Array<int> one(3);
        std::cout << "The size of array allocated with 3 is: " << one.size() << std::endl;
        Array<int> two(6);
        one = two;
        std::cout << "The size of copy of array allocated with 6 is: " << one.size() << std::endl;
    }
    return 0;
}
