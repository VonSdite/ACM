#include "stdio.h"
int biggest_common_number(int a, int b)//求最大公约数
{
	int c=a%b;
	for(;c!=0;)
	{
		a=c;
		c=b%a;
		b=a;
	}
	return b;
}
int main(int argc, char const *argv[])
{
	int a, b;
	while(~scanf("%d %d", &a, &b))
	{
		printf("%d\n", a*b/biggest_common_number(a,b));
	}
	return 0;
}