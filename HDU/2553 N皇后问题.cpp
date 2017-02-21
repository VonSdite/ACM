#include "cstdio"
#include "cstring"
// int n, ans, map[15], vis[15], sol[15];
// void dfs(int k)
// {
// 	if(k==n+1)
// 	{
// 		ans++;
// 		return;
// 	}
// 	int i, j, flag;
// 	for(i=1;i<=n;i++)
// 	{
// 		if(!vis[i])
// 		{
// 			map[k]=i;
// 			flag=1;
// 			for(j=1;j<k;j++)
// 			{
// 				if(map[k]-map[j]==k-j||map[k]-map[j]==j-k)
// 				{
// 					flag=0;
// 					break;
// 				}
// 			}
// 			if(flag)
// 			{
// 				vis[i]++;
// 				dfs(k+1);
// 				vis[i]--;
// 			}
// 		}
// 	}
// }
int main(int argc, char const *argv[])
{
	// for(n=1;n<=10;n++)
	// {
	// 	ans=0;
	// 	memset(map,0,sizeof(map));
	// 	memset(vis,0,sizeof(vis));
	// 	dfs(1);
	// 	sol[n]=ans;
	// 	printf("%d\n", sol[n]);
	// }
	//注释部分为打表的过程
	int n, sol[10]={1,0,0,2,10,4,40,92,352,724};
	while(~scanf("%d", &n)&&n)
	{
		printf("%d\n", sol[n-1]);
	}
	return 0;
}