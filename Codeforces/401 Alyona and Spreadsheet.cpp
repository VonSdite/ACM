#include <iostream>
#include <vector>

using namespace std;

std::vector<int> a[100005];
int ans[100005];

int main(int argc, char const *argv[])
{
	int n, m;
	while (~scanf("%d %d", &n, &m))
	{
		int tmp;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				scanf("%d", &tmp);
				a[i].push_back(tmp);
			}
		}

		for (int i = 0; i < n; ++i)
		{
			ans[i] = i;	//每行的起始行等于i(等号右边), 结束行为i(等行的左边)
		}

		int r, l;
		for (int i = 0; i < m; ++i)
		{
			r = l = 0;

			while(r < n)
			{
				while (r+1 < n && a[r+1][i] >= a[r][i])
				{
					++r;
					if(l < ans[r]) ans[r] = l;
				}

				l = r+1;
				r = l;
			}
		}

		int k;
		scanf("%d", &k);
		for (int i = 0; i < k; ++i)
		{
			scanf("%d %d", &l, &r);
			--l;
			--r;
			if(ans[r] <= l) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}