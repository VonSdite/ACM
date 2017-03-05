#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct Node
{
	int x, v;
}a[60006];

bool cmp(Node &a, Node &b)
{
	return a.x < b.x;
}

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i].x);
		}
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i].v);
		}
		
		sort(a, a+n, cmp);

		double t = 0;
		for (int i = 0; i < n; ++i)
		{
			int v_min = a[n-1].v;
			for (int j = n-1; j > i; --j)
			{
				if(j != n-1)
				{
					if(a[j].v >= v_min) continue;
					else v_min = a[j].v;
				}
				t = max((double)abs(a[i].x-a[j].x)/(a[i].v+a[j].v), t);
			}
		}
		printf("%.12f\n", t);
	}
	return 0;
}