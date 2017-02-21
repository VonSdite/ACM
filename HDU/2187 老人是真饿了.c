#include "stdio.h"
#include "stdlib.h"
struct rice
{
	int a;
	int b;
}r[1000];
int cmp(const void *a, const void *b)
{
	struct rice *c=(struct rice*)a;
	struct rice *d=(struct rice*)b;
	return c->a - d->a;
}
int main(int argc, char const *argv[])
{
	int c, i;
	scanf("%d", &c);
	while(c--)
	{
		int n, m;
		double w=0;
		scanf("%d %d", &n, &m);
		for(i=0;i<m;i++) 
		{
			scanf("%d %d", &r[i].a, &r[i].b);
		}
		qsort(r,m,sizeof(r[0]),cmp);
		for(i=0;i<m&&n>=0;i++)
		{
			if((double)n/r[i].a<(double)r[i].b) 
			{
				w+=(double)n/r[i].a;
				n-=r[i].a*r[i].b;
			}
			else 
			{
				w+=r[i].b;
				n-=r[i].a*r[i].b;
			}
		}
		printf("%.2f\n", w);
	}
	return 0;
}