#include <iostream>

using namespace std;

long long a[21] = {0, 0, 1};

int main(int argc, char const *argv[])
{
	int n;
	for (int i = 3; i < 21; ++i)
	{
		a[i] = (i - 1) * (a[i-1] + a[i-2]);
	}
	while (~scanf("%d", &n))
	{
		printf("%I64d\n", a[n]);
	}
	return 0;
}