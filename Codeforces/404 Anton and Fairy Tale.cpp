//注:以后验证开根sqrt的时候，如对a开根，用 sqrt(a)*sqrt(a)是否等于a来判断是否能开根
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	long long n, m;
	while (~scanf("%I64d %I64d", &n, &m))
	{
		if (m >= n)
		{
			printf("%I64d\n", n);
		}
		else
		{
			long long b = 8 * (n - m) + 1;
			long long a = sqrtl(b);
			long double tmp = (a - 1)/ 2 + m ;
			if (a*a != b) ++tmp;
			if (tmp > n) tmp = n;
			printf("%I64d\n", (long long)tmp);
		}
	}
	return 0;
}