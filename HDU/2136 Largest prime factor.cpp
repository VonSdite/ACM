#include "iostream"
using namespace std;

int prime[1000005]={0,0};

int main(int argc, char const *argv[])
{
	int j, cnt=1;
	for (int i = 2; i < 1000005; ++i)
	{
		if(prime[i]==0)
		{
			for (j = i; j<1000005; j+=i)
			{
				prime[j]=cnt;
			}
			cnt++;
		}
	}
	int n;
	while(~scanf("%d", &n))
	{
		printf("%d\n", prime[n]);
	}
	return 0;
}