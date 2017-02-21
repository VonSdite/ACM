#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d", &n), n)
	{
		int i, flo, aflo, tim=0;
		for(i=0;i<n;i++)
		{
			scanf("%d", &flo);
			if(i==0) tim+=flo*6+5;
			else
			{
				if(flo>aflo) tim+=(flo-aflo)*6+5;
				else if(flo<aflo) tim+=(aflo-flo)*4+5;
				else if(flo==aflo) tim+=5;
			}
			aflo=flo;
		}
		printf("%d\n", tim);
	}
	return 0;
}