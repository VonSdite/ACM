#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int t, a[1000], i;
		scanf("%d", &t);
		for(i=0;i<t;i++) scanf("%d", &a[i]);
		qsort(a,t,sizeof(int),cmp);
		for(i=0;i<t;i++) 
		{
			printf("%d", a[i]);
			if(i!=t-1) printf(" ");
		}
		puts("");
	}
	return 0;
}