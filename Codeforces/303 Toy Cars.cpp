#include <iostream>
#include <cstring>

using namespace std;

int matrix[104][104];
int ans[105];

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		int cnt = 0;
		for (int i = 0; i < n; ++i)
		{ 	
			bool flag = true;
			for (int j = 0; j < n; ++j)
			{
				scanf("%d", &matrix[i][j]);
				if(matrix[i][j] == 1 || matrix[i][j] == 3) flag = false;
			}

			if(flag) ans[cnt++] = i+1; 
		}

		printf("%d\n", cnt);
		for (int i = 0; i < cnt; ++i)
		{
			printf("%d", ans[i]);
			if(i != cnt-1) printf(" ");
			else printf("\n");
		}
	}
	return 0;
}