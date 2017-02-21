#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a, i, l, temp;
	while(scanf("%d %d", &i, &l)!=EOF)
	{
		printf("%d %d ", i, l);
		if(i>l)
		{
			temp=i;
			i=l;
			l=temp;
		}
		int max=0;
		for(;i<=l;i++)
		{
			a=i;
			int count=1;
			if(a%2) a=3*a+1;
			else a/=2;
			count++;
			for(;a!=1;)
			{
				if(a%2) a=3*a+1;
				else a/=2;
				count++;
			}
			if(max<count) max=count;
		}
		printf("%d\n", max);
	}
	return 0;
}