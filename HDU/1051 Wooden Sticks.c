#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct wood
{
	int a;
	int b;
}w[10000];
int ww[10000];
int cmp(const void *a, const void *b)
{
	struct wood *c=(struct wood *)a;
	struct wood *d=(struct wood *)b;
	if(c->a == d->a) return c->b - d->b;
	else return c->a - d->a;
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, i, j, sum=0;
		scanf("%d", &n);
		for(i=0;i<n;i++) scanf("%d %d", &w[i].a, &w[i].b);
		qsort(w,n,sizeof(w[0]),cmp);
		memset(ww,0,sizeof(ww));
		for(i=0;i<n;i++)
		{
			if(ww[i]==0)
			{
				int weight=w[i].b;
				for(j=i+1;j<n;j++)
				{
					if(ww[j]==0&&weight<=w[j].b) 
					{
						ww[j]++;
						weight=w[j].b;
					}
				}
				sum++;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}