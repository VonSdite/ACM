#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	int a[200];
	while(~scanf("%d %d", &n, &m) && (n || m))
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}
		int i = 0;
		for (; i < n; ++i)
		{
			if(m <= a[i]) break;
		}
		int j = i;
		for (i = n; i > j; --i)
		{
			a[i] = a[i-1];
		}
		a[j] = m;
		for (int i = 0; i <= n; ++i)
		{
			printf((i == 0)?"%d" : " %d", a[i]);
		}
		puts("");
	}
	return 0;
}