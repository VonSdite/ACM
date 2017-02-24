#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, k, l, r;

	while (~scanf("%d %d", &n, &m))
	{
		int a[n][m];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				scanf("%d", &a[i][j]);
			}
		}
		scanf("%d", &k);

		for (int i = 0; i < k; ++i)
		{
			bool flag = false;
			scanf("%d %d", &l, &r);

			--l;
			--r;
			for (int i = 0; i < m; ++i)
			{
				int j;
				for ( j = l + 1; j <= r; ++j)
				{
					if (a[j][i] < a[j - 1][i])
					{
						break;
					}
				}
				if (j == r + 1)
				{
					flag = true;
					break;
				}
			}
			if (flag) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}