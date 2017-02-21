#include "stdio.h"
#define max1(a,b) (a>b)?a:b
#define max(a,b,c,d) ((max1(a,b))>(max1(c,d)))?(max1(a,b)):(max1(c,d))
int main(int argc, char const *argv[])
{
	int n, i, a;
	while(~scanf("%d", &n))
	{
		int dist1, dist2, dist3, dist4;
		for(i=1;i<=n;i++)
		{
			scanf("%d", &a);
			if(a==1) 
			{
				dist1=i-1;
				dist2=n-i;
			}
			else if(a==n)
			{
				dist3=i-1;
				dist4=n-i;
			}
		}
		printf("%d\n", max(dist1,dist2,dist3,dist4));
	}
	return 0;
}