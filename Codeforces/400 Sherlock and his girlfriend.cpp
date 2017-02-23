#include <iostream>
#include <cstring>

using namespace std;


bool if_prime(int n)
{

	for (int i = 2; i * i <= n; ++i)
	{
		if(!(n % i)) return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		if(n>=3)
		{
			printf("2\n");
			for (int i = 2; i <= n+1; ++i)
			{
				if(if_prime(i)) printf("1 ");
				else printf("2 ");
			}
		}
		else
		{
			printf("1\n");
			for (int i = 0; i < n; ++i)
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	return 0;
}