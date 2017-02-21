#include "stdio.h"
#include "stdlib.h"
struct tt
{
	char s;
	int p;
}c[200002];
int main(int argc, char const *argv[])
{
	int n, i;
	while(~scanf("%d", &n))
	{
		getchar();
		for(i=0;i<n;i++) scanf("%c", &c[i].s);
		for(i=0;i<n;i++)
		{
			scanf("%d", &c[i].p);
		}
		int min=2147483647, k;
		for(i=0;i<n-1;i++)
		{
			if(c[i].s=='R')
			{
				if(c[i+1].s=='R') continue;
				else
				{
					k=(c[i+1].p-c[i].p)/2;
					if(min>k) min=k;
				}
			}
		}
		if(min==2147483647) printf("-1\n");
		else printf("%d\n", min);
	}
	return 0;
}