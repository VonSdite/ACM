#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct infor
{
	char name[20];
	int region;
	int score;
}people[100000];

int cmp(const void *a, const void *b)
{
	struct infor *c=(struct infor*)a;
	struct infor *d=(struct infor*)b;
	if(c->region==d->region) return d->score - c->score;
	else return c->region - d->region;
}
int main(int argc, char const *argv[])
{
	int n, m, i, rec[10001];
	while(~scanf("%d %d", &n, &m))
	{
		memset(rec,0,sizeof(rec));
		for(i=0;i<n;i++)
		{
			scanf("%s", people[i].name);
			scanf("%d %d", &people[i].region, &people[i].score);
		}
		qsort(people,n,sizeof(people[0]),cmp);
		for(i=0;i<n;i++)
		{
			rec[people[i].region]++;
		}
		int count=0;
		for(i=1;i<=m;i++)
		{
			if(rec[i]==2)
			{
				printf("%s %s\n", people[count].name, people[count+1].name);
				count+=2;
			}
			else
			{
				if(people[count+1].score>people[count+2].score)
					printf("%s %s\n", people[count].name, people[count+1].name);
				else puts("?");
				count+=rec[i];
			}
		}
	}
	return 0;
}