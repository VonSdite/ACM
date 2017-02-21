#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	__int64 dp[40];
	dp[1] = 3, dp[2] = 8;
	for (int i = 3; i < 40; i++) dp[i] = 2 * (dp[i - 1] + dp[i - 2]);
	while (scanf("%d", &n) != EOF)
	{
		printf("%I64d\n", dp[n]);
	}
	return 0;
}