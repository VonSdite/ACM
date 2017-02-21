#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n, i;
	char a[10];
	while(~scanf("%d", &n))
	{
		getchar();
		for(i=0;i<=n;i++) gets(a);
		printf("%d\n", (n-4)/2);
	}
	return 0;
}