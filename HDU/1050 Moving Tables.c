#include "stdio.h"//计算最大重叠区间数
#include "string.h"
int main(int argc, char const *argv[])
{
	int t, zoulang[201];
	scanf("%d", &t);
	while(t--)
	{
		int n, a, b, i;
		memset(zoulang,0,sizeof(zoulang));
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d %d", &a, &b);
			if(a>b)
			{
				i=a;
				a=b;
				b=i;
			}
			for(i=(a+1)/2; i<=(b+1)/2;i++) zoulang[i]++;//通过加1标志走廊号， 用过一次这个走廊+1；
		}
		int max=0;
		for(i=0;i<201;i++)//找重复用了最多次的走廊
		{
			if(max<zoulang[i]) max=zoulang[i];
		}
		printf("%d\n", max*10);
	}
	return 0;
}