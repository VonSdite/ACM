#include<stdio.h>
int main(int argc, char const *argv[])
{
	long long n;
	while(scanf("%lld", &n)!=EOF)
	{
		printf("%lld\n\n", (1+n)*n/2);
	}
	return 0;
}