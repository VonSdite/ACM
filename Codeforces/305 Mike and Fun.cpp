#include <iostream>
#include <algorithm>

using namespace std;

bool a[505][505];

int main(int argc, char const *argv[])
{
	int n, m, q;

	scanf("%d %d %d", &n, &m, &q);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf("%d", &a[i][j]);
		}
	}

	int tr, tc;		
	int ans;
	int cur;
	for (int i = 0; i < q; ++i)
	{
		scanf("%d %d", &tr, &tc);
		--tr;
		--tc;
		a[tr][tc] ^= 1;

		ans = 0;
		cur = 0;
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(a[i][j]) ++cur;
				else cur = 0;
				ans = max(ans, cur);
			}
			cur = 0;
		}

		printf("%d\n", ans);
	}

	return 0;
}