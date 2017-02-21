#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while (n--)
	{
		string words;
		cin >> words;
		string::iterator it = words.begin();
		string::reverse_iterator it1 = words.rbegin();
		for (; it != words.end(); ++it, ++it1)
		{
			if(*it != *it1) break;
		}
		if(it == words.end()) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}