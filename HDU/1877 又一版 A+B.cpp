#include <stdio.h>
int main()
{
	int m, a, b, s, z[100], j, h;
	while (~scanf("%d", &m) && m)
	{
		j = 0;
		scanf("%d%d", &a, &b);
		s = a + b;
		if (s == 0)
		{
			printf("0\n");
		}
		else
		{
			while (s)
			{
				z[j] = s % m;
				s = s / m;
				j++;
			}
			for (h = j - 1; h >= 0; h--)
				printf("%d", z[h]);
			printf("\n");
		}
	}
	return 0;
}