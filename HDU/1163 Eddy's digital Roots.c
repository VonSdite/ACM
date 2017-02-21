#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n, sum, i, m;
	while(~scanf("%d", &n)&&n)
	{
		m=n;
		n%=9;
		for(i=0, sum=1;i<m;i++)
		{
			sum=sum*n%9;
		}
		printf("%d\n", (sum+8)%9+1);
	}
	return 0;
}