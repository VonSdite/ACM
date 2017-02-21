#include "stdio.h"
#include "stdlib.h"
int a[100005];
int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char const *argv[])
{
	long long n, i, sum;
	while(~scanf("%lld", &n))
	{
		for(i=0, sum=0;i<n;i++) 
		{
			scanf("%d", &a[i]);
			sum+=a[i];
		}
		qsort(a,n,sizeof(int),cmp);

		printf("%lld\n", 2*a[n-1]-sum+1);
	}
	return 0;
}