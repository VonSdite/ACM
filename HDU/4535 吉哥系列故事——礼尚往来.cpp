#include <iostream>
#include <cmath>

const int MOD = 1e9+7;

using namespace std;

long long a[101] = {0, 0, 1};

int main(int argc, char const *argv[])
{
	for (int i = 3; i < 101; ++i)
	{
		a[i] = ((i - 1) % MOD * (a[i-1] + a[i-2]) % MOD) % MOD;
	}
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);
		printf("%I64d\n", a[n]);
	}
	return 0;
}