#include "stdio.h"
#include "stdlib.h"
int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char const *argv[])
{
	int n, a[10000], i;
	while(~scanf("%d", &n))
	{
		for(i=0;i<n;i++) scanf("%d", &a[i]);
		qsort(a,n,sizeof(int),cmp);
		printf("%d\n", a[n/2]);
	}
	return 0;
}