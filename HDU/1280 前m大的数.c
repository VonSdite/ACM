#include "stdio.h"

int a[5005], b[1500*2999+5], c[1500*2999+5];
int n, m, i, j, k;

void swap(int x, int y)
{
	int t=b[x];
	b[x]=b[y];
	b[y]=t;
}

void siftdown(int i)
{
	int t, flag=0;
	while(i*2<=m&&!flag)
	{
		if(b[i]>b[i*2]) t=i*2;
		else t=i;
		if(i*2+1<=m)
		{
			if(b[t]>b[i*2+1]) t=i*2+1;
		}
		if(t!=i)
		{
			swap(t,i);
			i=t;
		}
		else flag=1;
	}
}

void creat_dui()
{
	int i;
	for(i=m/2;i>=1;i--)
	{
		siftdown(i);
	}
}

int deletemax()
{
	int t=b[1];
	b[1]=b[m];
	m--;
	siftdown(1);
	return t;
}

int main(int argc, char const *argv[])
{
	while(~scanf("%d %d", &n, &m))
	{
		for(i=1;i<=n;i++) scanf("%d", &a[i]);
		for(i=1, k=1;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				b[k++]=a[i]+a[j];
			}
		}
		n=(n-1)*n/2;
		creat_dui();
		for(i=m+1;i<=n;i++)
		{
			if(b[i]>b[1])
			{
				b[1]=b[i];
				siftdown(1);
			}
		}
		int num=m;
		for(i=1;i<=num;i++)
		{
			c[i]=deletemax();
		}
		for(i=num;i>=1;i--) printf(i==num?"%d":" %d", c[i]);
		puts("");
	}
	return 0;
}