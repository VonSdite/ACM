#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		int a[50000]={0};
		int temp, i, j;
		for(i=0;i<n;i++)
		{
			scanf("%d", &temp);
			a[temp]++;
			if(a[temp]>=(n+1)/2) j=temp;
		}
		printf("%d\n", j);
	}
	return 0;
}