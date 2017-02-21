#include <stdio.h>
int main()
{
	char str[20];
	double a,b,
	sum=0;
	while(scanf("%s%lf%lf",str,&a,&b)!=EOF)
	{
       sum+=a*b;
	}
	printf("%.1lf\n",sum);
	return 0;
}