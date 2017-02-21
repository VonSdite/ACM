#include <stdio.h>
#include <math.h>
int main()
{
	int a[100][100], i, j, m, n, f1, f2;
	while (scanf("%d %d", &m, &n) != EOF)
	{
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				scanf("%d", &a[i][j]);

		f1 = 0; f2 = 0;
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				if (fabs(a[i][j]) > fabs(a[f1][f2]))
				{
					f1 = i; f2 = j;
				}
		printf("%d %d %d\n", f1 + 1, f2 + 1, a[f1][f2]);

	}
	return 0;
}