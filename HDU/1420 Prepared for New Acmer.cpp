#include <iostream>

using namespace std;

int qucikpower(long long a, long long b, long long c)
{
	long long ans = 1;

	while(b)
	{
		if(b & 1)
		{
			ans = (ans * a) % c;
		}
		b >>= 1;
		a = (a * a) % c;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	while (n--)
	{
		long long a, b, c;
		scanf("%I64d %I64d %I64d", &a, &b, &c);
		printf("%d\n", qucikpower(a, b, c));
	}
	return 0;
}