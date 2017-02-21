/* 分析：花在第i个项目的时间为：s[i-1]*bi+ai ,其中s[i-1]等于从第一个项目，到第i-1个项目时一共花了多少时间。

假设在最优项目排列中，第i个项目和第j个项目是相邻的（且先i后j）此时i与j一共花的时间为：ai+aj+bj*ai 秒。

而如果i与j互换位置，则一共花的时间为：aj+ai+aj*bi，

则明显bj*ai<=aj*bi，则ai/bi<=aj/bj。

则使用贪心算法，以ai/bi从小到大的顺序排列。*/

#include "stdio.h"
#include "stdlib.h"
struct time
{
	int a;
	int b;
	double value;
}t[100000];
int cmp(const void *a, const void *b)
{
	struct time *c=(struct time *)a;
	struct time *d=(struct time *)b;
	return (c->value > d->value)?1:-1;
}
int main(int argc, char const *argv[])
{
	int n, i;
	long long tm, tm1;
	while(~scanf("%d", &n)&&n)
	{
		for(i=0;i<n;i++) 
		{
			scanf("%d %d", &t[i].a, &t[i].b);
			t[i].value=(double)t[i].a/t[i].b;
		}
		qsort(t,n,sizeof(t[0]),cmp);
		for(i=0,tm=0,tm1=0;i<n;i++)
		{
			tm+=t[i].a+tm1*t[i].b;
			tm%=(365*24*60*60);
			tm1=tm;
			tm1%=(365*24*60*60);
		}
		printf("%I64d\n", tm);
	}
	return 0;
}