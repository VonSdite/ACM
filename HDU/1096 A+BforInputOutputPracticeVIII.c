#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n, sum;
	int a[100];
	scanf("%d", &n);
	while(n--)
	{
		int m, i;
		scanf("%d", &m);
		for(i=0, sum=0;i<m;i++) 
		{
			scanf("%d", &a[i]);
			sum+=a[i];
		}
		printf("%d\n", sum);
		if(n!=0) printf("\n");
	}
	return 0;
}