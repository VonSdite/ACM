#include <stdio.h>
int main()
{
	__int64 a[1000], n;
	int i, j, l, k, b[1000];
	while (scanf("%I64d", &n) != EOF)
	{
		for (i = 0;; i++)
		{
			scanf("%I64d%d", &a[i], &b[i]);
			if (a[i] == n)
				k = i;
			if (a[i] == 0)
				break;
		}
		l = i; j = 1;
		for (i = 0; i < l; i++)
		{
			if (b[i] > b[k])
				j++;
		}
		printf("%d\n", j);
	}
	return 0;
}