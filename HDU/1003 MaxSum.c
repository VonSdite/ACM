#include<stdio.h>
int a[100002];
int main(int argc, char const *argv[])
{
	int tt, ttt=1;
	scanf("%d", &tt);
	while(tt--)
	{
		int i, n;
		scanf("%d", &n);
		for(i=0;i<n;i++) scanf("%d", &a[i]);
		int sum, ans, x, y, st, ed;
		sum=ans=a[0]; x=y=st=ed=1;
		for(i=1;i<n;i++)
		{
			if(sum<0)
			{
				sum=a[i];
				st=i+1;
				ed=i+1;
			}
			else
			{
				sum+=a[i];
				ed=i+1;
			}
			if(ans<sum)
			{
				ans=sum;
				x=st;
				y=ed;
			}
		}
		printf("Case %d:\n%d %d %d\n", ttt++, ans, x, y);  
        if(tt!=0) puts(""); 
	}
	return 0;
}