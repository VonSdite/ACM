#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n, m, a[1000], i, sum;
	scanf("%d", &n);
	while(n)
	{
		n--;
		scanf("%d", &m);
		for(i=0, sum=0;i<m;i++) 
		{
			scanf("%d", &a[i]);
			sum+=a[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}