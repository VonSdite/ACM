#include "iostream"
#include "string"
#include "cstring"
#include "cstdlib"
#include "iomanip"
using namespace std;
struct acm_t
{
	char name[30];
	char ac[20][20];
	int score;
	int time;
}acmer[1000];
int cmp(const void *a, const void *b)
{
	acm_t *c=(acm_t*)a;
	acm_t *d=(acm_t*)b;
	if(c->score==d->score&&c->time==d->time) return strcmp(c->name,d->name);
	else if(c->score==d->score) return c->time - d->time;
	else return d->score - c->score;
}
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	int n, m;
	while(cin>>n>>m)
	{
		int k=0;
		while(cin>>acmer[k].name)
		{
			acmer[k].score=0;
			acmer[k].time=0;
			for (int i = 0; i < n; ++i)
			{
				cin>>acmer[k].ac[i];
				int tmp=atoi(acmer[k].ac[i]);
				if(tmp>0) 
				{
					acmer[k].score++;
					acmer[k].time+=tmp;
					strtok(acmer[k].ac[i],"(");
					acmer[k].time+=atoi(strtok(NULL,"("))*m;
				}
			}
			k++;
		}
		qsort(acmer,k,sizeof(acm_t),cmp);
		for (int i = 0; i < k; ++i)
		{
			printf("%-10s %2d %4d\n", acmer[i].name, acmer[i].score, acmer[i].time);
		}
	}
	return 0;
}