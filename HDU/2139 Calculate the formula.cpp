#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;
	while(~scanf("%I64d", &n))
	{
		printf("%I64d\n", n*(n+1)*(n+2)/6);;
	}
	return 0;
}