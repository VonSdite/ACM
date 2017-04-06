#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5;
char a[SIZE];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		memset(a, 0, sizeof(a));
		if(n&1)
		{
			n-=3;
			n/=2;
			a[0]='7';
			for (int i = 1; i <= n; ++i)
			{
				a[i]='1';
			}
			a[n+1]='\0';
		}
		else
		{
			n/=2;
			for (int i = 0; i < n; ++i)
			{
				a[i]='1';
			}
			a[n]='\0';
		}
		printf("%s\n", a);
	}
	return 0;
}