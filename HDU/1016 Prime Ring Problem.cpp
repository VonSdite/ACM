#include "cstdio"
int vis[21]={0}, num[21]={0}, n;

int prime(int k)
{
	int i;
	for(i=2;i*i<=k;i++)
		if(k%i==0) return 0;
	return 1;
}
void dfs(int k)
{
	int i;
	if(k>n&&prime(num[n]+num[1]))
	{
		printf("%d", num[1]);
		int j;
		for (j=2;j<=n;j++)
		{
			printf(" %d", num[j]);
		}
		puts("");
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(!vis[i]&&prime(i+num[k-1]))
			{
				vis[i]++;
				num[k]=i;
				dfs(k+1);
				vis[i]--;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int cnt=1;
	while(~scanf("%d", &n))
	{
		printf("Case %d:\n", cnt++);
		num[1]=1;
		dfs(2);
		puts("");
	}
	return 0;
}