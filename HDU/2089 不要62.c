#include<stdio.h>
#include<string.h>
int dp[10][3];
void calc()
{
	memset(dp,0,sizeof(dp));
	int i;
	dp[0][0]=1;
	for(i=1;i<=9;i++)
	{
		dp[i][0]=dp[i-1][0]*9-dp[i-1][1];
		dp[i][1]=dp[i-1][0];
		dp[i][2]=dp[i-1][2]*10+dp[i-1][0]+dp[i-1][1];
	}
}
int solve(int n)
{
	int i, tem=n, a[10], len, ans, flag;
	len=ans=flag=0;
	while(n)
	{
		a[++len]=n%10;
		n/=10;
	}
	a[len+1]=0;
	for(i=len;i>0;i--)
	{
		ans+=dp[i-1][2]*a[i];
		if(flag) ans+=dp[i-1][0]*a[i];
		if(!flag&&a[i]>4) ans+=dp[i-1][0];
		if(!flag&&a[i]>6) ans+=dp[i-1][1];
		if(!flag&&a[i+1]==6&&a[i]>2) ans+=dp[i][1];
		if(a[i]==4||(a[i+1]==6&&a[i]==2)) flag=1;
	}
	return tem-ans;
}
int main(int argc, char const *argv[])
{
	int a, b;
	calc();
	while(~scanf("%d %d", &a, &b)&&(a||b))
	{
		printf("%d\n", solve(b+1)-solve(a));
	}
	return 0;
}