#include <iostream>
#include <cstring>
#include <string>
#include <map>

using namespace std;

map<char, long long> operator+(map<char, long long> &a, map<char, long long>& b)
{
	map<char, long long> c;
	for (int i = 0; i < 26; ++i)
	{
		c['a' + i] = a['a' + i] + b['a' + i];
	}
	return c;
}


int main(int argc, char const *argv[])
{
	int n, t;
	scanf("%d", &t);

	string tm1, tm2;
	while (t--)
	{
		cin >> tm1 >> tm2 >> n;

		map<char, long long> a, b;
		for (size_t i = 0; i < 26; ++i)
		{
			a['a' + i] = 0;
			b['a' + i] = 0;
		}

		for (size_t i = 0; i < tm1.length(); ++i)
		{
			++a[tm1[i]];
		}

		for (size_t i = 0; i < tm2.length(); ++i)
		{
			++b[tm2[i]];
		}
		
		if(n == 0)
		{
			for (auto it: a)
			{
				cout << it.first << ":" << it.second << endl;
			}
		}

		else if(n == 1)
		{
			for (auto it: b)
			{
				cout << it.first << ":" << it.second << endl;
			}
		}
		else
		{
			map<char, long long> c;
			for (int i = 2; i <= n; ++i)
			{
				c = a + b;
				a = b;
				b = c;
			}
			for (auto it: c)
			{
				cout << it.first << ":" << it.second << endl;
			}
		}
		cout << endl;
	}
	return 0;
}