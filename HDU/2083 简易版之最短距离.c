#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char const *argv[])
{
	int m, a[600];
	scanf("%d", &m);
	while(m--)
	{
		int n;
		scanf("%d", &n);
		int i;
		for(i=1;i<=n;i++) scanf("%d", &a[i]);
		qsort(a+1,n,sizeof(int),cmp);
		if(n%2)
		{
			int count=0;
			for(i=1;i<=n;i++)
			{
				if(a[(n+1)/2]>a[i]) count+=a[(n+1)/2]-a[i];
				else count+=a[i]-a[(n+1)/2];
			}
			printf("%d\n", count);
		}
		else
		{
			int count=0, b=a[n/2];
			for(i=1;i<=n;i++)
			{
				if(b>a[i]) count+=b-a[i];
				else count+=a[i]-b;
			}
			printf("%d\n", count);
		}
	}
	return 0;
}