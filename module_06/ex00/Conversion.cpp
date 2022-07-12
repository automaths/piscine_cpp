#include <iostream>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>

int main()
{
    std::string Text = ".345";
    int Result;

    std::istringstream convert(Text);

    if ( !(convert >> Result) )
        Result = 0;            
    Result += 0.010;
    std::cout << Result;
    return (0);
    return 0;
}
