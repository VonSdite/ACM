#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	__int64 dp[10000];
	int num = 2, count = 0, n;
	dp[1] = 1;
	for (int i = 2; i <= 100; i++)
	{
		dp[i] = dp[i - 1] + (int)pow(2.0, (num - 1));
		count++;
		if (count == num)num++, count = 0;
	}
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", dp[n]);
	}
	return 0;
}