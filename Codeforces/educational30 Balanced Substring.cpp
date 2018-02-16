// Ç°×ºÊý×é 

#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 1e5+5;
char s[SIZE];

struct node
{
	int v;
	int pos;
} a[SIZE];

bool cmp(node &a, node &b)
{
	if (a.v == b.v)
	{
		return a.pos < b.pos;
	}
	return a.v < b.v;
}

int main(int argc, char const *argv[])
{
	int len;
	while (~scanf("%d", &len))
	{
		scanf("%s", s);
		a[0].v = 0;
		a[0].pos = 0;
		for (int i = 1; i < len; ++i)
		{
			int x = (s[i-1] == '0')? -1:1;
			a[i].v = a[i-1].v + x;
			a[i].pos = i;
		}
		sort(a, a+len, cmp);
		
		int res = 0;
		for (int i = 0; i < len-1; ++i)
		{
			int tmp = i;
			while (a[i].v == a[i+1].v)
			{
				++i;				
			}
			res = max(res, a[i].pos - a[tmp].pos);
		}
		printf("%d\n", res);
	}
	return 0;
}
