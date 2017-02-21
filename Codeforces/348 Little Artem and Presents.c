#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n))
	{
		if(n%3==0)
		{
			printf("%d\n", 2*n/3);
		}
		else 
		{
			if((n+1)%3==0)
			{
				printf("%d\n", 2*(n+1)/3-1);
			}
			if((n+2)%3==0)
			{
				printf("%d\n", 2*(n+2)/3-1);
			}
		}
	}
	return 0;
}