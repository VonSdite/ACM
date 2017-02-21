#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a, v1, v2;
	while(~scanf("%d %d %d", &a, &v1, &v2))
	{
		if(a==0) printf("%.10f\n", 0.0);
		else if(v1<=v2) printf("Infinity\n");
		else printf("%.10f\n", (double)v1*a/(v1*v1-v2*v2));
	}
	return 0;
}