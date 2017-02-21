#include <iostream>
#include <algorithm>

using namespace std;

int dp[100010];
int ans[100010];

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int tmp;
		int n;
		scanf("%d", &n);
		int len = 1;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);

			if(i == 0)
			{
				dp[i] = tmp;
				ans[i] = len;
				continue;
			}

			if(tmp > dp[len - 1])
			{
				dp[len++] = tmp;
				ans[i] = len;
			}
			else
			{
				int pos = lower_bound(dp, dp+len, tmp) - dp;
				dp[pos] = tmp;
				ans[i] = pos + 1;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			printf("%d", ans[i]);
			if(i == n-1) printf("\n");
			else putchar(' ');
		}
	}
	return 0;
}