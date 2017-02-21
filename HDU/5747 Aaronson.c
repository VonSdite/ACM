#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m, j, sum=0;
		scanf("%d %d", &n, &m);
		if(m>=29)
		{
			while(n)
			{
				for(j=29;j>=0;j--)
				{
					int k=n/(int)pow(2,j);
					if(n%(int)pow(2,j)!=0)
					{
						if(k>0)
						{
							sum+=k;
							n-=k*(int)pow(2,j);
						}
					}
					else
					{
						sum+=k;
						n-=k*(int)pow(2,j);
					}
				}
			}
			printf("%d\n", sum);
		}
		else
		{
			while(n)
			{
				for(j=m;j>=0;j--)
				{
					int k=n/(int)pow(2,j);
					if(n%(int)pow(2,j)!=0)
					{
						if(k>0)
						{
							sum+=k;
							n-=k*(int)pow(2,j);
						}
					}
					else
					{
						sum+=k;
						n-=k*(int)pow(2,j);
					}
				}
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}