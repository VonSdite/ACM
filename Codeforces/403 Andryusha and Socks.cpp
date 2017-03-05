#include <iostream>
#include <cstring>

using namespace std;

int a[200005];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		memset(a, 0, sizeof(a));
		n *= 2;
		int cnt = 0;
		int max = 0;
		int tmp;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);
			++a[tmp];
			if(a[tmp] == 2)
			{
				--cnt;
			}
			else
			{
				++cnt;
				if(cnt > max) max = cnt;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}