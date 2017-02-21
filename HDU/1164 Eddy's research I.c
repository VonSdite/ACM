#include "stdio.h"
int main(int argc, char const *argv[])
{
	int x, a[6542]={0}, i, j, k;
	for(i=2, j=0;i<65536;i++)
	{
		for(k=2;k*k<=i;k++)
		{
			if(i%k==0) break;
		}
		if(k*k>i)
		{
			a[j++]=i;
		}
	}
	while(~scanf("%d", &x))
	{
		for(i=0;i<6542;)
		{
			if(x%a[i]==0)
			{
				printf("%d", a[i]);
				x/=a[i];
				if(x!=1) putchar('*');
				else puts("");
			}
			else i++;
		}
	}
	return 0;
}