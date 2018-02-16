#include <stdio.h>
#include <iostream> 

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k, x;
	while (~scanf("%d %d %d", &n, &k, &x))
	{
		int res = 0;
		int tmp;
		int i = 0;
		for (; i < n-k; ++i)
		{
			scanf("%d", &tmp);
			res += tmp;
		}
		for (;i < n; ++i)
		{
			scanf("%d", &tmp);
			res += x;
		}
		printf("%d\n", res);
	}
	return 0;
}
