#include "iostream"
using namespace std;

long long sum[100005]={0};
int main(int argc, char const *argv[])
{
	long long n, i;
	for ( i = 1; i < 100005; ++i)
	{
		if(i%3) sum[i]=sum[i-1]+i;
		else sum[i]=sum[i-1]+i*i*i;
	}
	while(scanf("%I64d",&n)&&n>=0)
	{
		printf("%I64d\n", sum[n]);
	}
	return 0;
}