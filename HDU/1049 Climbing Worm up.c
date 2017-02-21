#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n, d, u ,t;
	while(~scanf("%d %d %d", &n, &u, &d)&&n)
	{
		t=0;
		t+=(n-u)/(u-d)*2;
		if((n-u)%(u-d)) t+=3;
		else t++;
		printf("%d\n", t);
	}
	return 0;
}