#include "stdio.h"
int main(int argc, char const *argv[])
{
	double a[277];
	a[0]=0;
	int i=1;
	while(i<277)
	{
		a[i]=a[i-1]+1./(i+1);
		i++;
	}
	double n;
	while(~scanf("%Lf", &n)&&n)
	{
		for(i=1;i<277;i++)
		{
			if(n<=a[i]) break;
		}
		printf("%d card(s)\n", i);
	}
	return 0;
}