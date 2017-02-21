#include "stdio.h"
int main(int argc, char const *argv[])
{
	int k, a;
	while(~scanf("%d", &k))
	{
		k%=65;
		for(a=1;a<=65;a++)
		{
			if((18+k*a)%65==0)
			{
				printf("%d\n", a);
				break;
			}
		}
		if(a==66) printf("no\n");
	}
	return 0;
}