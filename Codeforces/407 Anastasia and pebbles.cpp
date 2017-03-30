#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k;
	while (~scanf("%d %d", &n, &k))
	{
		int tmp;
		int cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);
			cnt += tmp/k;
			if(tmp % k) ++cnt;
		}
		int ans = cnt/2;
		if(cnt % 2) ++ans;
		printf("%d\n", ans);
	}
	return 0;
}