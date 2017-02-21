#include "stdio.h"
#include "stdlib.h"

struct ROOM
{
	double j;
	double f;
	double value;
}r[1500];

int cmp(const void *a, const void *b)
{
	struct ROOM *c=(struct ROOM *)a;
	struct ROOM *d=(struct ROOM *)b;
	return d->value>c->value?1:-1;
}

int main(int argc, char const *argv[])
{
	int n, i;
	double m;
	while(~scanf("%lf %d", &m, &n)&&~(int)m&&~n)
	{
		if(n)
		{
			for(i=0;i<n;i++) 
			{
				scanf("%lf %lf", &r[i].j, &r[i].f);
				if(r[i].f!=0) r[i].value=r[i].j/r[i].f;
				else r[i].value=r[i].j;
			}
			qsort(r,n,sizeof(r[0]),cmp);
			double sum=0;
			for(i=0;m>=0&&i<n;i++)
			{
				if(m<=r[i].f) sum+=r[i].value*m;
				else 
				{
					if(r[i].f) sum+=r[i].j;
				}
				m-=r[i].f;
			}
			for(i=0;i<n;i++)
			{
				if(r[i].f==0) sum+=r[i].value;
			}
			printf("%.3f\n", sum);
		}
		else printf("%.3f\n", 0);
	}
	return 0;
}