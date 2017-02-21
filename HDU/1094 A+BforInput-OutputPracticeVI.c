#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n, a[1000], i, sum;
	while(~scanf("%d", &n))
	{
		for(i=0, sum=0;i<n;i++) 
		{
			scanf("%d", &a[i]);
			sum+=a[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}