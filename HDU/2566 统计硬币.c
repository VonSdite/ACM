#include<stdio.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		int i, j, count=0;
		for(i=0;i<=n;i++)
			for(j=0;j<=n-i;j++)
				if(4*i+j+n==m) count++;
		printf("%d\n", count);
	}
	return 0;
}