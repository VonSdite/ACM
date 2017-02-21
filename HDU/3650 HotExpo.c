#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	int n, i, j, a[86402], start=86402, end=-1, c, d;
	while(~scanf("%d",&n)&&n)
	{
		memset(a,0,sizeof(a));
		for(i=1;i<=n;i++)
		{
			scanf("%d %d", &c, &d);
			for(j=c;j<=d;j++) a[j]++;
			if(c<start) start=c;
			if(d>end) end=d;
		}
		int m=a[start];
		for(i=start+1;i<=end;i++)
			if(m<a[i]) m=a[i];
		printf("%d\n", m);
	}
	return 0;
}