#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int a[1005], b[1005];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n) && n)
	{
		memset(b, 0, sizeof(b));
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}

		for (int i = 0; i < n; ++i)
		{
			b[i] = a[i];
			for (int j = 0; j < i; ++j)
			{
				if(a[j] < a[i])
				{
					b[i] = max(b[i], b[j] + a[i]);
				}
			}
		}

		int max = b[0];
		for (int i = 1; i < n; ++i)
		{
			if(max < b[i]) max = b[i];
		}

		printf("%d\n", max);

	}
	return 0;
}