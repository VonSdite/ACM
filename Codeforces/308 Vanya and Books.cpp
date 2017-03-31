#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long long n;
	while (~scanf("%I64d", &n))
	{
		long long ans = 0, s = 1;
		while (n - s >= 0)
		{
			ans += n - s + 1;
			s *= 10;
		}
		printf("%I64d\n", ans);
	}
	return 0;
}
