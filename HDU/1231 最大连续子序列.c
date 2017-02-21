#include<stdio.h>
int a[10000];
int main(int argc, char const *argv[])
{
	int k;
	while(scanf("%d", &k)!=EOF&&k)
	{
		int i, sum, ans, st, ed, x, y, kk=k;
		for(i=0;i<k;i++) 
		{
			scanf("%d", &a[i]);
			if(a[i]<0) kk--;
			if(i==0) sum=ans=st=ed=x=y=a[0];
			else 
			{
				if(sum<0)
				{
					sum=a[i];
					st=a[i];
					ed=a[i];
				}
				else
				{
					sum+=a[i];
					ed=a[i];
				}
				if(ans<sum)
				{
					ans=sum;
					x=st;
					y=ed;
				}
			}
		}
		if(kk!=0) printf("%d %d %d\n", ans, x, y);
		else printf("%d %d %d\n", 0, a[0], a[k-1]);
	}
	return 0;
}