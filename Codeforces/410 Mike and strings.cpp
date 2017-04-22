#include <bits/stdc++.h>

using namespace std;

const int SIZE = 55;
string a[SIZE];
map<string, int> MIN;
map<string, int> exist;
map<string, int> e;

string RightShift(string &s, int k) 
{
	size_t N = s.length();
	for (int i = 0; i < k; i++)
	{
		char t = s[0];
		for (size_t j = 0; j < N-1; ++j)
		{
			s[j] = s[j+1];
		}
		s[N-1] = t;
	}
	return s;
}

int main(int argc, char const *argv[])
{
	int n;
	string tmp, t;
	bool flag;
	while (~scanf("%d", &n))
	{
		flag = true;
		MIN.clear();
		exist.clear();
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			MIN[a[i]] = 0;
		}
		
		size_t len = a[0].length();
		for (int i = 0; i < n; ++i)
		{
			if(!i) exist[a[i]]++;
			if(i && !exist[a[i]]) 
			{
				flag = false;
				break;
			}
			for (size_t j = 1; j < len; ++j)
			{
				++e[a[i]];
				RightShift(a[i], 1);
				exist[a[i]]++;
				if(!e[a[i]]) 
				{
					MIN[a[i]] += j;
				}

			}
			e.clear();
		}
		if(flag)
		{
			int MINN = 1e9+5;
			for(auto w:MIN)
			{
				MINN = min(MINN, w.second);
			}
			printf("%d\n", MINN);
		}
		else printf("-1\n");
		
	}
	return 0;
}