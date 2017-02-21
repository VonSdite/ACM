#include <bits/stdc++.h>
using namespace std;
int ans[5];
int main()
{
	string s;
	cin >> s;
	string tmp = "RBYG";
	for (size_t i = 0; i < tmp.size(); ++i)
	{
		size_t pos = 0;
		for (size_t j = 0; j < s.size(); ++j)
		{
			if (s[j] == tmp[i])
			{
				pos = j;
				break;
			}
		}

		for (size_t j = pos % 4; j < s.size(); j += 4)
		{
			if (s[j] == '!')ans[i]++;
		}
	}

	for (size_t i = 0; i < 4; ++i)
	{
		cout << ans[i] << (i == 3 ? "\n" : " ");
	}

	return 0;
}