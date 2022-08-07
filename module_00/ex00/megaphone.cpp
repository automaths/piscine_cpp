#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class	Speech{
	private:
	string speech;
	public:
	Speech(string str){speech = str;}
	void addElement(string str){speech.append(str);}
	void shoutOut(){std::cout << speech << std::endl;}
}

