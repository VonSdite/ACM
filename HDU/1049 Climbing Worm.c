#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n, u, d, a, b;
	while(~scanf("%d %d %d", &n, &u, &d)&&n)
	{
		b=2*n/(u-d);
		for(a=b-1;a>=0;a--)
		{
			if(a%2) 
			{
				if(2*u+(a-1)*(u-d)>=2*n)
				{
					if(2*u+(a-3)*(u-d)<2*n) 
						{
							printf("%d\n", a); 
							break;
						}
				}
			}
		}
	}
	return 0;
}