#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	while (cin >> s)
	{
		size_t len = s.length();
		int cnt = 0;
		for (size_t i = 0; i < len-1; ++i)
		{
			if('V' == s[i] && 'K' == s[i+1])
			{
				++cnt;
				s[i] = '-';
				s[i+1] = '-';
				++i;
			}
		}
		for (size_t i = 0; i < len-1; ++i)
		{
			if(s[i] == 'V' && s[i+1] =='V')
			{
				++cnt;
				break;
			}
			else if(s[i] == 'K' && s[i+1] =='K')
			{
				++cnt;
				break;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}