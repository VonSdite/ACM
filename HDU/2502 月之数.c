#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		if(n==1) printf("1\n");
		else printf("%d\n", (int)pow(2,n-2)*(n+1));
	}
	return 0;
}