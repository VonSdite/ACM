#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct Need
{
	int p;
	int r;
}city[500005];

int dp[500005];

bool compare(Need &a, Need &b)
{
	return a.p < b.p;
}

int main(int argc, char const *argv[])
{
	int n;
	int c = 1;
	while (~scanf("%d", &n))
	{

		int len = 1;

		for (int i = 0; i < n; ++i)
		{
			scanf("%d %d", &city[i].p, &city[i].r);
		}

		sort(city, city + n, compare);

		dp[0] = city[0].r;

		for (int i = 1; i < n; ++i)
		{
			if(city[i].r > dp[len - 1])
			{
				dp[len++] = city[i].r;
			}
			else
			{
				int pos = lower_bound(dp, dp+len, city[i].r) - dp;
				dp[pos] = city[i].r;
			}
		}

		printf("Case %d:\n", c++);
		if(len > 1) printf("My king, at most %d roads can be built.\n", len);
		else printf("My king, at most %d road can be built.\n", len);
		printf("\n");
	}
	return 0;
}