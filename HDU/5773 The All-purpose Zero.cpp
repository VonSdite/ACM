#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

#define inf 0x3f3f3f3f

int dp[100005];

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	int c = 1;

	while (t--)
	{
		int n;
		scanf("%d", &n);
		int tmp;
		int cnt = 0;

		int len = 1;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);

			if(i == 0)
			{
				if(tmp == 0)
				{
					dp[i] = inf;
					++cnt;
				}
				else
				{
					dp[i] = tmp;
				}
				continue;
			}

			if(tmp == 0) 
			{
				++cnt;
				continue;
			}
			
			tmp -= cnt;

			if(tmp > dp[len - 1])
			{
				dp[len++] = tmp;
			}
			else
			{
				int pos = lower_bound(dp, dp+len, tmp) - dp;
				dp[pos] = tmp;
			}

		}
		if(cnt != n) printf("Case #%d: %d\n", c++, len + cnt);
		else printf("Case #%d: %d\n", c++, cnt);

	}
	return 0;
}