#include "cstdio"
#include "cstring"
#include "map"
#define set(a) memset(a,0,sizeof(a))
using namespace std;
map <int,int> lang;
struct movie
{
	int a;
	int b;
}p[200002];
int main(int argc, char const *argv[])
{
	int n, i, j;
	while(~scanf("%d", &n))
	{
		for(i=0;i<n;i++)
		{
			scanf("%d", &j);
			lang[j]++;
		}
		int m;
		scanf("%d", &m);
		for(i=0;i<m;i++) scanf("%d", &p[i].a);
		for(i=0;i<m;i++) scanf("%d", &p[i].b);
		int k=0, max=0;
		for(i=0;i<m;i++)
		{
			if(max<lang[p[i].a])
			{
				max=lang[p[i].a];
				k=i;
			}
		}
		int max11=0;
		for(i=0;i<m;i++)
		{
			if(lang[p[i].a]==max)
			{
				if(lang[p[i].b]>max11)
				{
					max11=lang[p[i].b];
					k=i;
				}
			}
		}
		printf("%d\n", k+1);
	}
	return 0;
}