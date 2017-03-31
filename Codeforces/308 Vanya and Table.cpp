#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		int x1, y1, x2, y2;
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
			sum += (y2-y1+1)*(x2-x1+1);
		}
		printf("%d\n", sum);
	}
	return 0;
}