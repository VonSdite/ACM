#include <stdio.h>
int main()
{
	__int64 a,b,c;
	while(~scanf("%I64d%I64d%I64d",&a,&b,&c))
	{
		if(a+b==c||a+c==b||b+c==a||a*b==c||a*c==b||b*c==a||a&&(c%a==b||b%a==c)||b&&(c%b==a||a%b==c)||c&&(a%c==b||b%c==a))
			puts("oh,lucky!");
		else
			puts("what a pity!");
	}
	return 0;
}