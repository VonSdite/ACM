#include"stdio.h"
#include<string.h>
long long dp[20][3];
void init()
{
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	int i;
	for(i=1;i<20;i++)
	{
		dp[i][0]=dp[i-1][0]*10-dp[i-1][1];
		dp[i][1]=dp[i-1][0];
		dp[i][2]=dp[i-1][2]*10+dp[i-1][1];
	}
}
long long solve(long long n)
{
	int i, flag, len=0, a[21];
	long long ans;
	while(n)
	{
		a[++len]=n%10;
		n/=10;
	}
	a[len+1]=ans=flag=0;
	for(i=len;i>0;i--)
	{
		ans+=dp[i-1][2]*a[i];
		if(flag) ans+=dp[i-1][0]*a[i];
		if(!flag&&a[i]>4) ans+=dp[i-1][1];
		if(a[i+1]==4&&a[i]==9) flag=1;
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		init();
		printf("%lld\n", solve(n+1));
	}
	return 0;
}