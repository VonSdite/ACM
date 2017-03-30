#include <bits/stdc++.h>

using namespace std;

#define set0(a) memset(a, 0, sizeof(a))

// const int SIZE = 1e5+5;
// int a[SIZE];

const int MAX = 1e9+5;

map<long long, bool> record;

int main(int argc, char const *argv[])
{
	long long b, q, l, m;
	int tmp;
	while (~scanf("%I64d %I64d %I64d %I64d", &b, &q, &l, &m))
	{
		record.clear();
		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &tmp);
			++record[tmp];
		}

		if(abs(b) > l) printf("0\n");
		else
		{
			long long cnt;
			if(1 == q)
			{
				cnt = MAX;
				if(record[b]) --cnt;
				if(MAX - 1 == cnt) cnt = 0;
			}
			else if(0 == q)
			{
				if(b)
				{
					if(record[b*q]) 
					{
						if(record[b]) cnt = 0;
						else cnt = 1;
					}
					else cnt = MAX;
				}
				else
				{
					cnt = MAX;
					if(record[b]) --cnt;
					if(MAX - 1 == cnt) cnt = 0;
				}
			}
			else if(-1 == q)
			{
				if(b)
				{
					cnt = MAX + 1;
					if(record[b]) --cnt;
					if(record[-b]) --cnt;
					if(MAX - 1 == cnt) cnt = 0;
				}
				else
				{
					cnt = MAX;
					if(record[b]) --cnt;
					if(MAX - 1 == cnt) cnt = 0;
				}
			}
			else
			{
				if(b)
				{
					cnt = 1;
					if(record[b]) --cnt;
					while(true)
					{
						b*=q;
						if(abs(b) > l) break;
						++cnt;
						if(record[b]) --cnt;
					}
				}
				else
				{
					cnt = MAX;
					if(record[b]) --cnt;
					if(MAX - 1 == cnt) cnt = 0;
				}
			}
			if(MAX == cnt || MAX + 1 == cnt) printf("inf\n");
			else printf("%I64d\n", cnt);
		}
	}
	return 0;
}