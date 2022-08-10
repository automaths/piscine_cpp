#include "easyfind.hpp"

int main()
{
        int myints[] = { 10, 20, 30, 40 };
    int * p;

    std::vector<int> myvector (myints,myints+4);
    std::vector<int>::iterator it;

    it = find (myvector.begin(), myvector.end(), 30);
    if (it != myvector.end())
        std::cout << "Element found in myvector: " << *it << '\n';
    else
        std::cout << "Element not found in myvector\n";
    return 0;
    // std::vector<int> vect;
    // std::vector<int> result;
    
    // vect.push_back(10);
    // vect.push_back(20);
    // vect.push_back(30);
    // try
    // {
    //     result = easy_find< std::vector<int> >(vect, 40);
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // // std::cout << result << std::endl;

}