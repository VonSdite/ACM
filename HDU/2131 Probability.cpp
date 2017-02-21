#include "iostream"
#include "string"
#include "iomanip"
#include "algorithm"
using namespace std;

int main(int argc, char const *argv[])
{
	char letter;
	string word;
	while(cin>>letter>>word)
	{
		int cnt=0;
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		if(letter>='A'&&letter<='Z') letter+=32;
		for (int i = 0; i < word.length(); ++i)
		{
			if(word[i]==letter) cnt++;
		}
		cout<<setiosflags(ios::fixed)<<setprecision(5)<<(double)cnt/word.length()<<endl;
	}
	return 0;
}