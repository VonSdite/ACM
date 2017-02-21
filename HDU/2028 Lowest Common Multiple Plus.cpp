#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
	return (b == 0) ? a : gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
	long long n, a[100];
	while (~scanf("%lld", &n))
	{
		for (long long i = 0; i < n; ++i)
		{
			scanf("%lld", &a[i]);
		}
		long long res = a[0];
		for (long long i = 1; i < n; ++i)
		{
			res = a[i] * res / gcd(a[i], res);
		}

		printf("%lld\n", res);
	}
	return 0;
}