#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
		string str;
		getline(cin, str);
		int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;

		string::size_type pos = 0;

		for (; pos != str.length(); ++pos)
		{
			switch (tolower(str[pos]))
			{
			case 'a': ++sum1; break;
			case 'e': ++sum2; break;
			case 'i': ++sum3; break;
			case 'o': ++sum4; break;
			case 'u': ++sum5; break;
			}
		}
		cout << "a:" << sum1 << endl;
		cout << "e:" << sum2 << endl;
		cout << "i:" << sum3 << endl;
		cout << "o:" << sum4 << endl;
		cout << "u:" << sum5 << endl;
		if (n) cout << endl;
	}
	return 0;
}