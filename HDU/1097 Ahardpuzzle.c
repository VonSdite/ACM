#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a, b, record[10], i, count;
	for(i=0;i<10;i++) record[i]=1;
	for(i=2, count=0;i<10;)
	{
		record[i]*=i;
		count++;
		record[i]%=10;
		if(record[i]==i&&count!=1)
		{
			record[i]=count-1;
			count=0;
			i++;
		}
	}
	while(~scanf("%d %d", &a, &b))
	{
		if(b!=0)
		{
			a%=10;
			int save=a;
			b%=record[a];
			if(b==0) b=record[a];
			for(i=0;i<b-1;i++)
			{
				a*=save;
				a%=10;
			}
			printf("%d\n", a);
		}
		else if(b==0)
		{
			printf("%d\n", 1);
		}
	}
	return 0;
}