#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
	string Sentence;
	while (getline(cin, Sentence))
	{
		string::size_type i = 0;
		while (i != Sentence.length())
		{
			while (i != Sentence.length() && isspace(Sentence[i]))
				++i;
			if (i != Sentence.length()) Sentence[i] = toupper(Sentence[i]);
			while (i != Sentence.length() && !isspace(Sentence[i]))
				++i;
		}
		cout << Sentence << endl;
	}
	return 0;
}