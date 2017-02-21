#include "stdio.h"
long long robot[100000];
int main(int argc, char const *argv[])
{
	long long n, k, i;
	while(~scanf("%I64d %I64d", &n, &k))
	{
		for(i=0;i<n;i++) scanf("%I64d", &robot[i]);
		for(i=1;i*(i+1)/2<k;i++);
		int flag=i*(i+1)/2-k;
		printf("%I64d\n", robot[i-flag-1]);
	}
	return 0;
}