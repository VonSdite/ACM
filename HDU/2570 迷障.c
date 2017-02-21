#include <stdio.h>
int main()
{
	int c,n,v,w,i,j;
	double a[200],t,s,p,b[200];
	scanf("%d",&c);
	while(c--)
	{
		s=0.0;p=0.0;
		scanf("%d%d%d",&n,&v,&w);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{t=a[j];a[j]=a[j+1];a[j+1]=t;}
			}
		}
		for(i=0;i<n;i++)
		{
			s=s+a[i]/100*v;
			p=p+v;
			b[i]=s/p;
			if(b[i]>(w/100.0))
			{
				if(i==0)
				{
					printf("0 0.00\n");
					break;
				}
				else
				{
				printf("%d %.2f\n",(int)(p-v),b[i-1]);
				break;
				}
			}
		}
		if(i==n)
			printf("%d %.2f\n",(int)p,b[n-1]);
	}
	return 0;
}