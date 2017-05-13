#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int g, v, cnt, ans;
	while (~scanf("%d", &n))
	{
		g = 0, cnt = 0, ans = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &v);
			g = __gcd(g,v);
			if(v&1) ++cnt;
			else ans += (cnt/2)+2*(cnt&1), cnt=0;
		}
		ans += (cnt/2)+2*(cnt&1);
		printf("YES\n");
		if(1 == g)
		{
			printf("%d\n", ans);
		}
		else printf("0\n");
	}
	return 0;
}