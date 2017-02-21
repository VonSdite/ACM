#include<stdio.h>
int main()
{
    long long n,a,b,c,d;
    long long ans;
	while(~scanf("%I64d %I64d %I64d %I64d %I64d", &n, &a, &b, &c, &d))
	{
		int i;
		ans=0;
	    for(i=1;i<=n;i++)
	    {
	        long long b2=b-c+i;
	        long long c2=a-d+i;
	        long long d2=b-c+c2;
	        if(1<=b2&&b2<=n&&1<=c2&&c2<=n&&1<=d2&&d2<=n)
	            ans++;
	    }
	    ans*=n;
	    printf("%I64d\n", ans);
	}
	return 0;
}