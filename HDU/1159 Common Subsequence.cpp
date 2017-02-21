#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

char a[1000], b[1000];
int len[1000][1000];


int main(int argc, char const *argv[])
{
	while (~scanf("%s %s", a, b))
	{
		int a_len = strlen(a);
		int b_len = strlen(b);
		memset(len, 0, sizeof(len));
		for (int i = 1; i <= a_len; ++i)
		{
			for (int j = 1; j <= b_len; ++j)
			{
				if(a[i-1] == b[j-1])
				{
					len[i][j] = len[i-1][j-1] + 1;
				}
				else
				{
					len[i][j] = max(len[i-1][j], len[i][j-1]);
				}
			}
		}
		printf("%d\n", len[a_len][b_len]);
	}
	return 0;
}