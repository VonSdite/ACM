#include <iostream>

using namespace std;

#define Mod 1007

int c[2001][2001];


int main(int argc, char const *argv[])
{
	for (int i = 0; i < 2001; ++i)
	{
		c[i][0] = 1;
		c[i][1] = i % Mod;
	}

	for (int i = 2; i < 2001; ++i)
	{
		for (int j = 2; j <= i; ++j)
		{
			c[i][j] = (c[i-1][j]%Mod + c[i-1][j-1]%Mod) % Mod; 
		}
	}

	int t;
	scanf("%d", &t);
	while (t--)
	{
		int m, n;
		scanf("%d %d", &m, &n);
		printf("%d\n", c[n][m]);
	}
	return 0;
}