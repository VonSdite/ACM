#include "map"
#include "string"
#include "iostream"
#include "algorithm"
#include "iterator"

const int inf=1000000;
const int Size=160;

using namespace std;

map<string, int> treemap;
map<string, int>::iterator mapIter1;
map<string, int>::iterator mapIter2;

bool vis[Size];
int dist[Size], cost[Size][Size];

void dijkstra(int v, int w, int n)
{
	int i, j, u, min;
	for(i=1;i<=n;i++)
	{
		dist[i]=cost[v][i];
		vis[i]=false;
	}
	vis[v]=true;
	dist[v]=0;
	for(i=2;i<=n;i++)
	{
		min=inf;
		for(j=1;j<=n;j++)
		{
			if(!vis[j]&&min>dist[j])
			{
				min=dist[j];
				u=j;
			}
		}
		vis[u]=true;
		for(j=1;j<=n;j++)
		{
			if(!vis[j]&&dist[j]>dist[u]+cost[u][j])
			{
				dist[j]=dist[u]+cost[u][j];
			}
		}
	}
	if(dist[w]==inf) printf("-1\n");
	else printf("%d\n", dist[w]);
}

int main(int argc, char const *argv[])
{
	int num, len, i, j, cnt;
	string start, destination, begin, end;
	while(~scanf("%d", &num)&&num!=-1)
	{
		cnt=0;
		treemap.clear();
		cin>>start>>destination;
		if(!treemap[start])
		{
			cnt++;
			treemap[start]=cnt;
		}
		if(!treemap[destination])
		{
			cnt++;
			treemap[destination]=cnt;
		}
		for(i=0;i<Size;i++)
		{
			for(j=0;j<Size;j++)
			{
				if(i==j) cost[i][j]=0;
				else cost[i][j]=inf;
			}
		}
		for(i=0;i<num;i++)
		{
			cin>>begin>>end;
			if(!treemap[begin])
			{
				cnt++;
				treemap[begin]=cnt;
			}
			if(!treemap[end])
			{
				cnt++;
				treemap[end]=cnt;
			}
			cin >> len;
			cost[treemap[begin]][treemap[end]]=cost[treemap[end]][treemap[begin]]=len;
		}
		dijkstra(treemap[start],treemap[destination],treemap.size());
	}
	return 0;
}
