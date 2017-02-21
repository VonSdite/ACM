#include <iostream>
#include <algorithm>

using namespace std;

int dp[10000];
int a[10000];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		int tmp;
		int len = 1;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);


			if(i == 0)
			{
				dp[i] = tmp;
				a[i] = len;
				continue;
			}

			if(tmp > dp[len - 1])
			{
				dp[len++] = tmp;
				a[i] = len;

			}
			else 
			{
				int pos = lower_bound(dp, dp+len, tmp) - dp;
				dp[pos] = tmp;
				a[i] = pos + 1;
			}
		}

		int	cnt = 0;

		while(1)
		{
			int num = 0;
			int k = 1;
			for (int i = 0; i < n; ++i)
			{
				if(a[i] == k)
				{
					++k;
					a[i] = 0;
					++num;
					if (k > len) break;
				}
			}

			if(num < len) break;
			++cnt;
		}

		printf("%d\n", len);
		printf("%d\n", cnt);
	}
	return 0;
}