#include "cstdio"
#include "cstring"
#include "iostream"
using namespace std;

long long one[64], allone, tmp;
int node[3011111][2], tag;

void add(long long tmp)
{
	int rt=0, t;
	int i;
	for(i=31;i>=0;i--)
	{
		t=tmp&one[i]?1:0;
		if(node[rt][t]==-1) node[rt][t]=++tag;
		rt=node[rt][t];
	}
}

long long lookfor(long long tmp)
{
	int rt=0, t;
	long long ans=0;
	int i;
	for(i=31;i>=0;i--)
	{
		t=tmp&one[i]?1:0;
		if(node[rt][t]==-1) t=t^1;
		rt=node[rt][t];
		ans=ans*2+t;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int t, i, tt=0;

	for(i=1,one[0]=1;i<60;i++) one[i]=2*one[i-1];
	allone=one[32]-1;

	scanf("%d", &t);
	while(t--)
	{
		tag=0;
		memset(node,-1,sizeof(node));
		int n, m;
		scanf("%d %d", &n, &m);
		for(i=0;i<n;i++)
		{
			scanf("%I64d", &tmp);
			add(tmp);
		}
		printf("Case #%d:\n", ++tt);
		for(i=0;i<m;i++)
		{
			scanf("%I64d", &tmp);
			tmp=tmp^allone;
			printf("%I64d\n", lookfor(tmp));
		}
	}
	return 0;
}