#include <iostream>

using namespace std;

long long a[26] = {1, 0, 1};

long long Cmn(int n, int m)
{
	long long a = 1, c = 1;
	for (int i = 1; i <= m; ++i)
	{
		c *= i;
		a *= (n - i + 1);
	}
	return a / c;
}

int main(int argc, char const *argv[])
{
	int n;
	for (int i = 3; i < 26; ++i)
	{
		a[i] = (i - 1) * (a[i-1] + a[i-2]);
	}
	while (~scanf("%d", &n) && n)
	{
		int tmp = n / 2;
		long long ans = 0;
		for (; tmp >= 0; --tmp)
		{
			ans += Cmn(n, tmp) * a[tmp];
		}
		printf("%I64d\n", ans);
	}
	return 0;
}