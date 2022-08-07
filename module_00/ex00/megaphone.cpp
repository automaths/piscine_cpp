#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class	Speech{
	private:
	string sentence;
	public:
	Speech(){sentence = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";}
	Speech(string str){sentence = str;}
	void addElement(string str)
	{
		str.erase(0, str.find_first_not_of(" "));
		str.erase(str.find_last_not_of(" ") + 1, str.size() - str.find_last_not_of(" "));
		sentence.append(" ");
		sentence.append(str);
	}
	void shoutOut()
	{
		for (int i = 0; i != sentence.size(); ++i)
			cout << (char)toupper(sentence[i]);
		cout << "" << endl;
	}
};

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		Speech megaphone;
		megaphone.shoutOut();
	}
	else
	{
		int i = 1;
		Speech megaphone(argv[1]);
		while (++i < argc)
			megaphone.addElement(argv[i]);
		megaphone.shoutOut();
	}
}
