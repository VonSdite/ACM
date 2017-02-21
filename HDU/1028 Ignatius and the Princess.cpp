#include <cstdio>
#include <cstring>
using namespace std;

const int maxexp = 120;

int main()
{
	int n, now, pre;
	int f[2][maxexp + 1];                      

	while (scanf("%d", &n) == 1)
	{
		memset(f, 0, sizeof(f));
		for (int i = 0; i <= n; i++)            
			f[1 % 2][i] = 1;
		for (int i = 2; i <= n; i++)
		{
			now = i % 2; pre = (i - 1) % 2;
			for (int j = 0; j <= n; j++)
				f[now][j] = 0;
			for (int j = 0; j <= n; j++)        
				for (int k = 0; k + j <= n; k += i) 
				{
					f[now][j + k] += f[pre][j];         
				}
		}
		printf("%d\n", f[n % 2][n]);
	}
	return 0;
}