#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


struct power
{
	double x;
	double y;
	double atan;
}ans[1001];

bool compare(power &a, power &b)
{
	return a.atan < b.atan;
}

int main(int argc, char const *argv[])
{
	int n;

	while (~scanf("%d", &n) && n >= 0)
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%lf %lf", &ans[i].x, &ans[i].y);
			ans[i].atan = atan(ans[i].y / ans[i].x);
			if(ans[i].x < 0) ans[i].atan += 3.14;
		}

		sort(ans, ans+n, compare);

		for (int i = 0; i < n; ++i)
		{
			printf("%.1f %.1f", ans[i].x, ans[i].y);
			if(i == n-1) printf("\n");
			else printf(" ");
		}
		
	}
	return 0;
}