#include <iostream>

using namespace std;

const int SIZE = 1e5+5;
long long a[SIZE];

int main(int argc, char const *argv[])
{
	int n;
	long long sum;
	while(~scanf("%d", &n))
	{
		sum = 0;
		a[0] = 0;
		for (int i = 1; i <= n; ++i)
		{
			scanf("%I64d", &a[i]);
			sum += a[i];
			a[i] = (1890*a[i]+143) % 10007 - a[i];
		}
		long long ans = 0;
		for (int i = 1; i <= n; ++i)
		{
			a[i] += a[i-1];
			if(a[i] - a[0] > ans) ans = a[i] - a[0];
			if(a[i] < a[0]) a[0] = a[i];
		}
		printf("%I64d\n", ans + sum);
	}
	return 0;
}