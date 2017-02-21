#include "iostream"
#include "cmath"
#include "cstdlib"
using namespace std;

struct trap_t
{
	int x1;
	int y1;
	int x2;
	int y2;
	int c;
}trap[51];
struct people_t
{
	int x;
	int y;
	int cnt;
}people[20000];

int cmp(const void *a, const void *b)
{
	people_t *c=(people_t *)a;
	people_t *d=(people_t *)b;
	return d->cnt - c->cnt;
}

int main(int argc, char const *argv[])
{
	int m, n;
	while(cin>>m>>n)
	{
		for (int i = 0; i < m; ++i)
		{
			cin>>people[i].x>>people[i].y;
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>trap[i].x1>>trap[i].y1;
			cin>>trap[i].x2>>trap[i].y2;
			trap[i].c=(trap[i].x2-trap[i].x1+trap[i].y2-trap[i].y1)*2;
		}
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(people[i].x>=trap[j].x1&&people[i].x<=trap[j].x2&&people[i].y<=trap[j].y2&&people[i].y>=trap[j].y1)
				{
					people[i].cnt=trap[j].c;
					break;
				}
			}
		}
		qsort(people,m,sizeof(people_t),cmp);
		for (int i = 0; i < m; ++i)
		{
			cout<<people[i].cnt<<endl;
		}
	}
	return 0;
}