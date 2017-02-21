#include "stdio.h"
#include "stdbool.h"
#include "string.h"
bool toy[1000001];
int main(int argc, char const *argv[])
{
	int n, m, i, j, sum, count;
	while(~scanf("%d %d", &n, &m))
	{
		memset(toy,0,sizeof(toy));
		for(i=0;i<n;i++)
		{
			scanf("%d", &j);
			if(j<1000001) toy[j]++;
		}
		for(i=1, count=0, sum=0;;i++)
		{
			if(toy[i]==0)
			{
				if(sum+i>m)
				{
					printf("%d\n", count);
					break;
				}
				else 
				{
					sum+=i;
					count++;
				}
			}
		}
		j=i;
		for(i=0;i<j-1;i++)
		{
			if(toy[i+1]!=1)
			{ 
				printf("%d ", i+1);
			}
		}
		puts("");
	}
	return 0;
}