#include<stdio.h>
int main(int argc, char const *argv[])
{
	int nn;
	scanf("%d", &nn);
	while(nn--)
	{
		int n, m, t=1;
		while(scanf("%d %d", &n, &m)!=EOF&&(n||m))
		{
			int a, b, count=0;
			for(b=2;b<n;b++)
			{
				for(a=1;a<b;a++)
				{
					if(((a*a+b*b+m)%(a*b))==0) count++;
				}
			}
			printf("Case %d: %d\n", t, count);
			t++;
		}
		if(nn!=0) puts("");
	}	
	return 0;
}