#include "stdio.h"
int main(int argc, char const *argv[])
{
	int i, a[100001]={0};
	for(i=0;i<=100000;i++) if((i%4==0&&i%100!=0)||i%400==0) a[i]=1;
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int y, n, count;
		scanf("%d %d", &y, &n);
		for(i=y, count=0;;i++)
		{
			if(a[i]==1) count++;
			if(count==n) break;
		}
		printf("%d\n", i);
	}
	return 0;
}