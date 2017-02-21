#include<stdio.h>
#include<stdbool.h>
int main(int argc, char const *argv[])
{
	int step, mod;
	while(scanf("%d %d", &step, &mod)!=EOF)
	{
		bool a[100000]={1};
		int seed, i, aseed=0;
		for(i=0;i<mod-1;i++)
		{
			seed=(aseed+step)%mod;
			if(a[seed]==1)
			{
				printf("%10d%10d    Bad Choice\n\n", step, mod);
				break;
			}
			a[seed]=1;
			aseed=seed;
		}
		if(i==mod-1) printf("%10d%10d    Good Choice\n\n", step, mod);
	}
	return 0;
}