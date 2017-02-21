#include "stdio.h"
#define pi 3.14159265359 
int main(int argc, char const *argv[])
{
	double d, h, v, e;
	while(~scanf("%lf %lf %lf %lf", &d, &h, &v, &e))
	{
		e=e*pi*(d/2)*(d/2);
		if(e>=v)
		{
			puts("NO");
		}
		else 
		{
			printf("YES\n%.12f\n", pi*h*(d/2)*(d/2)/(v-e));
		}
	}
	return 0;
}