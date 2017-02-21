#include <iostream>

using namespace std;

unsigned long long a[65] = {1, 2, 4};
unsigned long long b[65] = {0, 1, 3};

int main(int argc, char const *argv[])
{
	int n;
	for (int i = 3; i < 65; ++i)
	{
		a[i] = a[i-1] * 2;
		b[i] = a[i] - 1;
		for (int j = 1; j < i; ++j)
		{
			b[i] = min(b[i], 2 * b[j] + a[i-j] -1);
		}
	}
	while (~scanf("%d", &n))
	{
		printf("%I64d\n", b[n]);
	}
	return 0;
}