#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a[100005];
int b[100005];

int cmp(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}

int main(int argc, char const *argv[])
{
	int n, l, r;
	while (~scanf("%d %d %d", &n, &l, &r))
	{
		l--, r--;
		int flag = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &b[i]);
		}

		qsort(a+l,r-l+1,sizeof(int),cmp);
		qsort(b+l,r-l+1,sizeof(int),cmp);
		for (int i = 0; i < n; ++i)
		{
			if(a[i] != b[i])
			{
				flag = 1;
				break;
			}
		}
		
		if(flag) 
		{
			printf("LIE\n");
		}
		else
		{
			printf("TRUTH\n");
		}
	}
	return 0;
}